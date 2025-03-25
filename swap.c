#include <stdio.h>
#define SWAP(x,y,temp) {temp=x;x=y;y=temp;}
int main()
	{
	int a;
	int b;
	int temp;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("The original values of a and b before swapping are %d and %d",a,b);	
	SWAP(a,b,temp);	
	printf("\nThe swapped values are %d and %d \n",a,b);	
	return 0;
}
