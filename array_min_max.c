#include <stdio.h>
int main() {
    int size;
    // Array Declaration
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    
    // Input array elements
    printf("Enter the values:");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]) != 1) 
    }
    
    // Initialize min and max with first element
    min = max = arr[0];
    
    // Find minimum and maximum elements
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    // Display results
    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);
    
    return 0;
}

