#include <stdio.h>
int main()
	{
	int a;
	int b;
	int temp;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	temp=a;
	printf("The original values of a and b are %d and %d",a,b);	
	a=b;
	b=temp;
	printf("\nThe swapped values are %d and %d \n",a,b);	
	return 0;
}
