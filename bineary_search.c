#include <stdio.h>

// Function to perform iterative Binary Search
int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        // Calculate mid point (prevents overflow for large bounds)
        int mid = low + (high - low) / 2;

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid; // Return the index if found
        }

        // If target is greater, ignore the left half
        if (arr[mid] < target) {
            low = mid + 1;
        }
        // If target is smaller, ignore the right half
        else {
            high = mid - 1;
        }
    }

    // Return -1 if the element is not present in the array
    return -1;
}

int main() {
    int n, target, result;

    // 1. Get the number of elements from the user
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare array of size n

    // 2. Get the array elements from the user
    printf("Enter %d integers (IN SORTED ORDER): \n", n);
    for (int i = 0; i < n; i++) {
        
        scanf("%d", &arr[i]);
    }

    // 3. Get the target value to search for
    printf("Enter the value to search for: ");
    scanf("%d", &target);

    // 4. Call the binary search function
    result = binarySearch(arr, n, target);

    // 5. Output the result
    if (result == -1) {
        printf("\nElement %d is not present in the array.\n", target);
    } else {
        printf("\nElement %d found at index %d (Position %d).\n", target, result, result + 1);
    }

    return 0;
}
