#include <stdio.h>
int main()
	{
	int number;
	printf("Enter the Number to check whether Even or Odd:");
	scanf("%d",&number);
	(number%2==0)?(printf("Given Number is Even\n")):(printf("Given Number is Odd\n"));	
	return 0;
}
