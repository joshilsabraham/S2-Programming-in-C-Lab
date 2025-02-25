/*  
    Author: Joshil S Abraham  
    Date: 25/02/2025  
    Description: C Program to count the frequency of each character in a given string.  
*/

#include <stdio.h>
#include <string.h>
int main(){
	char str[50];
	int length,i=0,j=0;
	printf("Enter a String:");
	scanf("%[^\n]",str);
	length=strlen(str);
	for(i=0;i<length;i++){
		int count=1;
		if(str[i]!='\0'){
			for(j=i+1;j<length;j++){
				if(str[i]==str[j]){
					count++;
					str[j]='\0';
				}
			}
			printf(" %c : %d \n",str[i],count);
		}
	}
	return 0;
}					
