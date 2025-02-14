/*  
    Author: Joshil S Abraham  
    Date: 04/02/2025  
    Description: C Program to calculate the Factorial of a given number using while loop.  
*/

#include <stdio.h>

int main() {
    int number, i = 1, factorial = 1;

    // Prompt user for input
    printf("Enter a Number: ");
    
    // Validate input
    if (scanf("%d", &number) != 1) {
        printf("Invalid input! Please enter an integer.\n");
        return 1;
    }

    if (number < 0) {
        printf("Number cannot be negative!\n");
    } else {
        while (i <= number) { 
            factorial *= i;
            i++;
        }
        printf("The Factorial of %d is %d\n", number, factorial);
    }

    return 0;
}
