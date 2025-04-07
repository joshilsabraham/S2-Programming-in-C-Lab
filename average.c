/*	
    Author: Joshil S Abraham
    Date: 
    Description: C Program to print the Average of a One-Dimensional Array. 	
*/

#include <stdio.h>
int main(){
	int average,n,i,sum;
	printf("Enter the size of the Array: ");
	scanf("%d",&n);
	printf("Enter %d Numbers:",n);
	printf("\n");
	int arr[n];
	for(i=0;i<n;i++){
		printf("Number %d: ",i+1);
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	average=sum/n;
	printf("Average = %d\n",average);
	return 0;
}
