#include <stdio.h>
int main(){
	int number;
	for(number=1;number<11;number++){
		printf(" %d\n",number);
		if(number==5){
			break;
		}
	}
	return 0;
}
