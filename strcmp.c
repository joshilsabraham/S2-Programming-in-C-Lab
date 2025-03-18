#include <stdio.h>
#include <string.h>
int main(){
	char str1[50],str2[50];
	int result;
	printf("Enter the First String: ");
	scanf("%s",str1);
	printf("Enter the Second String: ");
	scanf("%s",str2);
	result=strcmp(str1,str2);
	if(result==0){
		printf("Both String 1 and String 2 are Equal");
	}else if(result>0){
		printf("The First String is greater than the Second String");
	}else{
		printf("The First String is smaller than the Second String");
	}
	printf("\n");
	return 0;
}
