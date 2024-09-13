// Day 5 Problem
// Find leaders in an array

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printArray(vector<int>& arr){
    cout <<"[ ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout <<"]"<< endl;
}
vector<int> leaderElements(vector<int>& arr) {
    vector<int> leaders;
    int size = arr.size();
    if (size==0) {return leaders;}

    int max = arr.at(size-1);
    leaders.push_back(max);

    for (int i=size-2 ; i>=0 ; i-- ){
        if ( arr.at(i)>max ){
            max = arr.at(i);
            leaders.push_back(max);
        }
    }

    reverse(leaders.begin(),leaders.end());
    return leaders;
}

int main() {
    vector<int> arr = {16,17,4,3,5,2};
    vector<int> leaders = leaderElements(arr);

    printArray(leaders);

    return 0;
}
