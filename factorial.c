#include <stdio.h>
int main(){
	int number,i=1,fact=1;
	printf("Enter a Number:");
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
