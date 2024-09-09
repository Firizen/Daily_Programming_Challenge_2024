#include <iostream>
#include <vector>
using namespace std;

void sortArr(vector<int>& arr) {
    int low = 0;
    int high = arr.size() - 1;
    int mid = 0;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else if (arr[mid] == 2) {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
    vector<int> arr = {1, 0, 2, 1, 0, 2, 1, 0};

    sortArr(arr);

    cout <<"[ ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout <<"]"<< endl;

    return 0;
}
