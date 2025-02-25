/*  
    Author: Joshil S Abraham  
    Date: 25/02/2025  
    Description: C Program to reverse a string entered by the user without using string library.
*/

#include <stdio.h>
int main(){
	char str[50],temp;
	int length,i,j;
	printf("Enter a String:");
	scanf("%[^\n]",str);
	for(length=0;str[length]!='\0';length++);
	i=length-1;
	for(j=0;j<(length/2);j++){
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i--;
	}
	printf("Reversed String is: ");
	printf("%s",str);
	printf("\n");
	return 0;
}
