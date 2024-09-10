#include <iostream>
#include <vector>
using namespace std;

int sortArr(vector<int>& arr) {
    int arr_sum = 0;
    int n = arr.size()+1;           //array size will be n-1
    int check_sum = (n*(n+1))/2;    //the som from 1 to n, considering no missing element
    
    for (int num : arr) {
        arr_sum+=num;               //the actual sum of elements in array
    }

    int missing_num = check_sum - arr_sum;    

    return missing_num;
}

int main() {
    vector<int> arr = {1,2,6,5,3,7};

    int missing_num = sortArr(arr);

    cout << missing_num << endl;

    return 0;
}
