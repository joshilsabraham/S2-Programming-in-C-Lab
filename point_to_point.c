#include <stdio.h>
int main(){
	int a=10;
	int *p,**q;
	p=&a;
	q=&p;
	printf("Value of a= %d\n",a);
	printf("Value of *p= %d\n",*p);
	printf("Value of **q is %d\n",**q);
	**q+=1;
	printf("Value of **q is %d\n",**q);
	printf("Value of *p= %d\n",*p);
	printf("Value of a = %d\n",a);
	return 0;
}
