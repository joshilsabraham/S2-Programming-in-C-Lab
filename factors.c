#include <stdio.h>
int main(){
	int num;
	printf("Enter a Number: ");
	scanf("%d",&num);
	int i=1;
	while(i<=num){
		if(num%i==0){
			printf("%d\n",i);
		}
		i++;
	}
	return 0;
}
