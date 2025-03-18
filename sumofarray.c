#include <stdio.h>
void inputArray(int arr[],int size);
void printArray(int arr[],int size);
void sumofArray(int arr[],int size);
int main(){
	int size;
	printf("Enter Size of the Array: ");
	scanf("%d",&size);
	int arr[size];
	inputArray(arr,size);
	printArray(arr,size);
	sumofArray(arr,size);
	return 0;
}
void inputArray(int arr[],int size){	
	printf("Enter the Elements of Array:");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
}
void printArray(int arr[],int size){	
	printf("The Elements of Array are:");		
	for(int i=0;i<size;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
}		
void sumofArray(int arr[],int size){
	int sum=0;
	for(int i=0;i<size;i++){
		sum=sum+arr[i];
	}
	printf("Sum of Elements of the Array is : %d",sum);
	printf("\n");
}
