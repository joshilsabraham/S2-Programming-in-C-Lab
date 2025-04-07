#include <stdio.h>
void inputArray(int arr[],int size){	
	printf("Enter the Elements of Array:");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
}
void printArray(int arr[],int size){	
	printf("The Elements of Array are:");		
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
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
void minmaxArray(int arr[],int size){
	int min=arr[0];	
	int max=arr[0];
	for(int i=0;i<size;i++){
		if(arr[i]>=max){
			max=arr[i];
		}
		if(arr[i]>=min){
			min=arr[i];
		}
	}
	printf("%d is the maximum\n",max);
	printf("%d is the minimum\n",min);
}
void searchArray(int arr[],int size){
	int element,flag=0;
	printf("Enter Element to Search: ");
	scanf("%d",&element);
	for(int i=0;i<size;i++){
		if(arr[i]==element){
			printf("%d occurs at index %d\n",element,i);
			flag=1;
			break;			
		}
	}
		if(!flag){
			printf("No Match Found\n");
		}
}
int main(){
	int size;
	printf("Enter Size of the Array: ");
	scanf("%d",&size);
	int arr[size];
	inputArray(arr,size);
	printArray(arr,size);
	sumofArray(arr,size);
	searchArray(arr,size);
	minmaxArray(arr,size);
	return 0;
}
