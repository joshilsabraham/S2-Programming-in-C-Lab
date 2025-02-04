/*	Author: Joshil S Abraham
	Date: 28/01/2025
	Description: C Program to find the Largest of Three Numbers using nested if statements. 	*/

#include <stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter three numbers:");
	scanf("%d %d %d",&num1,&num2,&num3);
	if (num1>num2){
		if (num1>num3){
			printf("The Largest Among the Given Three is %d\n",num1);
		}
		else{
			printf("The Largest Among the Given Three is %d\n",num3);
		}
	}
	else{
		if (num2>num3){
			printf("The Largest Among the Given Three is %d\n",num2);
		}
		else{
			printf("The Largest Among the Given Three is %d\n",num3);
		}
	}
	return 0;
}
