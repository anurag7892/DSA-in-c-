#include <iostream>
using namespace std;

// Binary search to find the position where key should be inserted
int binarySearch(int arr[], int key, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid + 1; // insert after duplicates for stability
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low; // correct position
}

void binaryInsertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Find position using binary search
        int pos = binarySearch(arr, key, 0, j);

        // Shift elements to make space for key
        while (j >= pos) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[pos] = key;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    binaryInsertionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}