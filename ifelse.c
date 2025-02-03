/* Author: Joshil S Abraham
   Date: 28/01/2025
   Description: C Program to check if the entered number is Even or Odd using if-else statement.*/

#include <stdio.h>
int main()
	{
	int number;
	printf("Enter a number:");
	scanf("%d",&number);
	if (number%2 == 0)
		{
		printf("Given Number is Even\n");
	}
	else
		{
		printf("Given Number is Odd\n");
	}
	return 0;
}
