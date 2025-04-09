#include <stdio.h>
int swap(int *a,int*b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int main(){
	int a,b,*ap,*bp,*temp;
	printf("Enter a Number: ");
	scanf("%d",&a);
	printf("Enter Another Number: ");
	scanf("%d",&b);
	ap=&a;
	bp=&b;
	printf("The Values before Swapping Become %d and %d\n",*(ap),*(bp));
	swap(ap,bp);
	printf("The Values after Swapping Become %d and %d\n",*(ap),*(bp));
	return 0;
}
