#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        // Safe calculation of mid to avoid integer overflow
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid; // Target found at index mid
        } 
        else if (arr[mid] < target) {
            low = mid + 1; // Discard left half
        } 
        else {
            high = mid - 1; // Discard right half
        }
    }

    return -1; // Target not present
}

int main(void) {
    // Array MUST be sorted
    int numbers[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int target = 23;

    int result = binarySearch(numbers, size, target);

    if (result != -1) {
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element %d not found\n", target);
    }

    return 0;
}