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
