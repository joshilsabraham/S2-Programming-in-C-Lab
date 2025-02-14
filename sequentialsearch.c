#include <stdio.h>
int main(){
  int size,i;
  printf("Enter the number of Elements:");
  scanf("%d",&size);
  int arr[size];
  printf("Enter the Elements:");
  for(i=0;i<size;i++){
      scanf("%d",&arr[i]);
  }
  int element;
  printf("Enter the element to search:");
  scanf("%d",&element);
  int flag=0;
  for(i=0;i<size;i++){
      if(arr[i]==element){
          int index=i;
          printf(%d occurs in the index %d",key,i);
          flag=1;
      }
  }
  if(flag!=1){
      printf("No Match!");
  }
  printf("\n"); 
  return 0;
}
