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
