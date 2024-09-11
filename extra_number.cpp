// Day 3 Problem
// Find the duplicate number
// You are given an array arr containing n+1 integers, where each integer is in the range [1, n] inclusive. 
// There is exactly one duplicate number in the array, but it may appear more than once. 
// Your task is to find the duplicate number without modifying the array and using constant extra space.

#include <iostream>
#include <vector>
using namespace std;

int findExtraNum(vector<int>& arr) {
    int arr_sum = 0;
    int n = arr.size()-1;           //array size will be n+1
    int check_sum = (n*(n+1))/2;    //the sum from 1 to n
    
    for (int num : arr) {
        arr_sum+=num;               //the actual sum of elements in array, along with the extra number
    }

    int extra_num = arr_sum - check_sum;    

    return extra_num;
}

int main() {
    vector<int> arr = {3, 1, 4, 4, 2};

    int extra_num = findExtraNum(arr);

    cout << extra_num << endl;

    return 0;
}
