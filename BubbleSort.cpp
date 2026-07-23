#include <iostream>
#include <vector>

using namespace std;

// Function to perform an optimized Bubble Sort
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;
    
    // Outer loop for each pass
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        
        // Inner loop to compare adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they are in the wrong order
                swap(arr[j], arr[j + 1]);
                swapped = true; 
            }
        }
        
        // Optimization: If no elements were swapped, array is already sorted
        if (!swapped) {
            break;
        }
    }
}

int main() {
    int size;

    // Get the array size from the user
    cout << "Enter the number of elements: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid array size!" << endl;
        return 1;
    }

    // Initialize vector to handle dynamic sizes safely
    vector<int> arr(size);

    // Get array elements from the user
    cout << "Enter " << size << " integers: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Perform Bubble Sort
    bubbleSort(arr);

    // Output the sorted array
    cout << "Sorted array in ascending order: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
