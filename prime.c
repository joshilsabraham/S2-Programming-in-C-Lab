#include <stdio.h>
int main(){
	int limit,isPrime,i,j;
	printf("Enter the Limit: ");
	scanf("%d",&limit);
	if(limit==1){
		printf("The Prime Number till 1 is 1 only ");
	}
	else if(limit==2){
		printf("The Prime Numbers till 2 are 1 and 2");
 	} 
 	else{
	 	printf("The Prime Numbers till %d are 1 2 ",limit);
		for(i=3;i<limit;i++){
			for(j=2;j<i;j++){
				isPrime=1;
				if(i%j==0){
					isPrime=0;
					break;
				}
			}
			if(isPrime==1){
				printf("%d ",i);
			}
		}
	}
	printf("\n");
	return 0;
}
