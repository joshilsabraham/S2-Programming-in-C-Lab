#include <stdio.h>
int main(){
	int rows,columns;
	printf("Enter number of rows: ");
	scanf("%d",&rows);
	printf("Enter number of columns: ");
	scanf("%d",&columns);
	int i,j;
	int matrix[rows][columns];
	int sum=0;
	printf("Enter the Elements of Matrix:\n");
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("Matrix 1:\n");		
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}		
	
	//Sum of Elements
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			sum=sum+matrix[i][j];
		}
	}
	
	printf("Sum of Elements of the Matrix is %d\n",sum);
	return 0;
}
