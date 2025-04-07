#include <iostream>
using namespace std;

void bubbleSort(int* arr, int n) {
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
}

void insertionSort(int* arr, int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i-1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main() {
    int numbers[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    bubbleSort(numbers, size);
    for (int x : numbers) cout << x << " ";
    cout<<endl;
    int counts[] = {12, 11, 13, 5, 6};
    int n2 = sizeof(counts)/sizeof(counts[0]);
    insertionSort(counts, n2);
    for (int x : counts) cout << x << " ";
}
