// Day 4 Problem
// Merge sort 2 arrays
// inplace, without using any extra space

#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int>& arr){
    cout <<"[ ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout <<"]"<< endl;
}
void mergeArrays(vector<int>& arr1,vector<int>& arr2) {
    int size1 = arr1.size();
    int size2 = arr2.size();
    int i,j,temp;
    for (i=0;i<size1;i++){
    
        if(arr1.at(i)<=arr2.at(0)){
            continue;
        }
        else{
            temp = arr1.at(i);
            arr1.at(i) = arr2.at(0);
            arr2.at(0) = temp;
            for (j=0;j<size2-1;j++){
                if(arr2.at(j)<=arr2.at(j+1)){
                    break;
                }
                else{
                    temp = arr2.at(j);
                    arr2.at(j) = arr2.at(j+1);
                    arr2.at(j+1) = temp;
                }
            }
        }
    }
}

int main() {
    vector<int> arr1 = {1,3,5,7};
    vector<int> arr2 = {2,4,6,8};

    mergeArrays(arr1,arr2);

    printArray(arr1);
    printArray(arr2);

    return 0;
}
