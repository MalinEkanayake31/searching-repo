#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the middle element is the target
        if (arr[mid] == target) {
            return mid; // Target found, return the index
        }
        // If the target is greater, ignore the left half
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        // If the target is smaller, ignore the right half
        else {
            right = mid - 1;
        }
    }

    // Target not found
    return -1;
}

int main() {
    int size = 10;
    int myArray[10];

    // Input the sorted array elements from the user
    printf("Enter %d sorted elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &myArray[i]);
    }

    int target;
    printf("Enter the element to search for: ");
    scanf("%d", &target);

    // Perform binary search
    int result = binarySearch(myArray, size, target);

    // Check and display the result
    if (result != -1) {
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element %d not found in the array\n", target);
    }

    return 0;
}
