#include <iostream>

void insertionSort(int* arr, int n) {
    for (int i = 1; i < n; i++) {
        int key = *(arr + i);
        int* j = arr + i - 1;
        
        // Move elements that are greater than key one position ahead
        while (j >= arr && *j > key) {
            *(j + 1) = *j;
            j--;
        }
        *(j + 1) = key;
    }
}

void printArray(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << *(arr + i) << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    insertionSort(arr, n);
    printArray(arr, n);
    
    return 0;
}
