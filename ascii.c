/*	
    Author: Joshil S Abraham
    Date: 
    Description: C Program to read a single character input from the user and then display the ASCII value associated with that character. 	
*/

#include <stdio.h>
int main()
	{
	char c;
	printf("Enter value:") ;
	scanf("%c",&c);
	printf("The ASCII for %c is %d\n",c,c);	
	return 0;
}
