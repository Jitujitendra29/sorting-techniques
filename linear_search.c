/*Apporach of linear search
STEP-1: Start from the first element of the array.
STEP-2: Compare the current element with the target value.
STEP-3: If they are equal, return the index (or position) of the element.
STEP-4: Otherwise, move to the next element.
STEP-5: Repeat steps 2–4 until the target is found or all elements have been checked.
STEP-6: If the target is not found, return -1 (or display "Element not found").*/

#include <stdio.h>

int main() {
    int arr[100]; 
    int size, i, search_key;
    int found = 0; 

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to search for: ");
    scanf("%d", &search_key);

    for (i = 0; i < size; i++) {
        if (arr[i] == search_key) {
            printf("Value %d found at index position %d.\n", search_key, i);
            found = 1; 
            break;     
        }
    }

    if (!found) {
        printf("Value %d is not present in the array.\n", search_key);
    }

    return 0;
}
