#include <stdio.h>
int fibonacci(int n){
	if(n==0 || n==1){
		return n;
	}else{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}
int main(){
	int n;
	printf("Enter a Number: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("%d ",fibonacci(i));
	}
	printf("\n");
}		
