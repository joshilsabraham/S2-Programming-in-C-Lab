/*
    Name: Joshil S Abraham
    Date: 11/02/2025
    Description: C Program to perform a sequential search in a one-dimensional array.
*/

#include <stdio.h>

int main() {
    int size, i;

    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    // Handle zero or negative array size
    if (size <= 0) {
        printf("Invalid array size!\n");
        return 1;
    }

    int arr[size];

    // Input array elements
    printf("Enter the elements: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int element, flag = 0;
    
    // Input the element to search
    printf("Enter the element to search: ");
    scanf("%d", &element);

    // Perform sequential search
    for (i = 0; i < size; i++) {
        if (arr[i] == element) {
            printf("%d occurs at index %d\n", element, i);
            flag = 1;
            break; // Exit loop once found
        }
    }

    // If element is not found
    if (!flag) {
        printf("No match found!\n");
    }

    return 0;
}
