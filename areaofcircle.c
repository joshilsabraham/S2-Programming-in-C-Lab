/*	
    Author: Joshil S Abraham
    Date: 
    Description: C Program to calculate the Area of a Circle. 	
*/

#include <stdio.h>
#define PI 3.14
int main()
	{
	int radius;
	float area;
	printf("Enter radius:");	
	scanf("%d",&radius);	
	area= PI*radius*radius;		
	printf("Area of a circle with radius %d is %f \n",radius,area);	
	return 0;
}
