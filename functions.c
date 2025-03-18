#include <stdio.h>
int pallindrome(){
	int num;
	printf("Enter a Number for Checking if Pallindrome or Not: ");
	scanf("%d",&num);
	int original=num,reversed=0,remainder;
	while(num!=0){
		remainder=num%10;
		reversed=reversed*10+remainder;
		num/=10;		
	}
	if(original==reversed){
		printf("The Given Number is a Pallindrome");
	}
	else{
		printf("The Given Number is not a Pallindrome");
	}
}
int factorial(){
	int number,i=1,fact=1;
	printf("Enter a Number for Calculating Factorial:");
	scanf("%d",&number);
	if (number>0) {
		while (i<=number){ 
			fact=fact*i;
			i=i+1;
			}
			printf("The Factorial of %d is %d\n",number,fact);
		}
	else {
		printf("Number Cannot be Negative!!\n");
	}
	return 0;
}
int main(){
	int num;
	factorial();
	pallindrome();
	printf("\n");
}

