/*
   Name: Joshil S Abraham
   Date: 04/02/2025
   Description: Program for a simple calculator, taking 
                two numbers and an operator as input and
                performing the corresponding operation.
*/

#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Input operator
    printf("Enter an operator (+, -, *, /, %): ");
    scanf(" %c", &operator);

    // Perform operation based on user input
    switch (operator) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed!\n");
            } else {
                printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
            }
            break;
        case '%':
            if (num2 == 0) {
                printf("Error: Modulus by zero is not allowed!\n");
            } else {
                printf("%d %% %d = %d\n", num1, num2, num1 % num2);
            }
            break;
        default:
            printf("Invalid operator! Please use +, -, *, /, or %.\n");
            break;
    }

    return 0;
}
