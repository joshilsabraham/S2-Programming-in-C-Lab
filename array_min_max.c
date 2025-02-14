/*	Author: Joshil S Abraham
	Date: 11/02/2025
	Description: C Program to input elements into a one-dimensional array, 
                 find the minimum and maximum elements and display their positions. 	*/

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
    
    //Initialize positions of minimum and maximum element
    int p1,p2;
    
    // Find minimum and maximum elements
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
            p1=i;
        }
        if (arr[i] > max) {
            max = arr[i];
            p2=i;
        }
    }
    
    // Display results
    printf("%d is the minimum element in the index position %d\n",min,p1);
    printf("%d is the maximum element in the index position %d\n", max,p2);
    
    return 0;
}                    
