#include <iostream>

using namespace std;

int findSecondOrThirdLargest(int arr[], int size, int position) {
    if (size < position) {
        return -1; // Not enough elements
    }

    // Initialize first, second, and third to the first element
    int first = arr[0], second = arr[0], third = arr[0];

    // Find the actual largest element first
    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            first = arr[i];
        }
    }

    // Re-initialize second and third to a value smaller than first
    second = third = first - 1;

    // Find the second and third largest elements
    for (int i = 0; i < size; i++) {
        if (arr[i] > second && arr[i] < first) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third && arr[i] < second) {
            third = arr[i];
        }
    }

    if (position == 2) return second;
    if (position == 3) return third;
    return -1; // Invalid position
}

int main() {
    int arr[] = {10, 20, 4, 45, 96, 6, 99};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Second largest: " << findSecondOrThirdLargest(arr, size, 2) << endl; // Output: 45
    cout << "Third largest: " << findSecondOrThirdLargest(arr, size, 3) << endl;  // Output: 20

    return 0;
}

