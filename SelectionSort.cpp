#include <iostream>
#include <vector>
using namespace std;
void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) { 
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            swap(arr[i], arr[min_idx]);
        }
    }
}
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}
int main() {
    int size;
    cout << "Enter the number of elements: ";
    if (!(cin >> size) || size <= 0) {
        cout << "Invalid array size!" << endl;
        return 1;
    }
    vector<int> arr(size);
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "\nOriginal array: ";
    printArray(arr);
    selectionSort(arr);
    cout << "Sorted array:   ";
    printArray(arr);
    return 0;
}
