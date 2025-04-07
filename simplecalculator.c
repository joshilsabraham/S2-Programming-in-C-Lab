/* Name: Joshil S Abraham
   Date: 04/02/2025
   Description: Program for a simple calculator, taking 
   		two numbers and an operator as input and
   		performing the corresponding operaton. */
#include <stdio.h>
int main(){
	int num1,num2;
	char operator;
	printf("Enter Two Numbers:");
	scanf("%d %d",&num1,&num2);
	printf("1.Add\n2.Difference\n3.Multiply\n4.Divide\n5.Modulus\nEnter Your Choice: ");
	scanf(" %c",&operator);
	switch(operator){
		case'1':
			printf("%d+%d=%d",num1,num2,num1+num2);
			break;
		case'2':
			printf("%d-%d=%d",num1,num2,num1-num2);
			break;
		case'3':
			printf("%dx%d=%d",num1,num2,num1*num2);
			break;
		case'4':
			if ((num1==0)||(num2==0)){
				printf("Cannot Divide by Zero!");
				break;
				}
			else{
				float divide= (float) num1/num2;
				printf("%d/%d=%f",num1,num2,divide);
				break;
				}
		case'5':
			printf("%d%%%d=%d",num1,num2,num1%num2);
			break;
		default:
			printf("Invalid Operation");
			break;
		}
		printf("\n");
	return 0;
}
