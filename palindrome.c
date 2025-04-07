#include <stdio.h>
int main(){
	char str[50],temp;
	int length,i,j;
	int flag=0;
	printf("Enter a String:");
	scanf("%s",str);
	for(length=0;str[length]!='\0';length++);
	i=length-1;
	for(j=0;j<(length/2);j++,i--){
		if(str[i]!=str[j]){
			flag=1;	
	}
	printf("Reversed String is: ");
	printf("%s",str);
	printf("\n");
	return 0;
}
