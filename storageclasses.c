#include <stdio.h>
int e = 20;
int increment(){
	auto int a=0;
	a++;
	static int s=0;
	s++;
	printf("Static Class Integer Variable 'x' = %d\n",s);
	printf("Auto Class Integer Variable 'a' = %d\n",a);
}
int global(){
	int e=10;
	printf("Inside Function = %d\n",e);
}
int main(){
	increment();
	printf("After Incrementing Both,\n");
	increment();
	register int r=7;
	printf("Register Class Integer Variable = %d\n",r);
	printf("Value of Extern Class Integer Variable 'e':\n");
	global();
	printf("Outside Function = %d\n",e);
	return 0;
}
