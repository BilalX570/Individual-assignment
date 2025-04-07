#include <iostream>
using namespace std;

int findSmallest(int arr[], int size) {
    int minNumber = arr[0];  // Assume first element is the smallest
    for (int i = 1; i < size; i++) {
        if (arr[i] < minNumber) {
            minNumber = arr[i];  // Update if a smaller number is found
        }
    }
    return minNumber;
}

int main() {
    int arr[] = {23, 45, 12, 67, 9, 89, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The smallest number in the array is: " << findSmallest(arr, size) << endl;
    return 0;
}
