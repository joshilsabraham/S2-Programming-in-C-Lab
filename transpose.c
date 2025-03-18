#include <stdio.h>
int main(){
	int rows,columns;
	printf("Enter number of rows: ");
	scanf("%d",&rows);
	printf("Enter number of columns: ");
	scanf("%d",&columns);
	int i,j;
	int matrix[rows][columns];
	int transpose[rows][columns];
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
	
	//Transpose
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			transpose[j][i]=matrix[i][j];
		}
	}
	
	printf("Transpose of the Matrix:\n");
	for(i=0;i<columns;i++){
		for(j=0;j<rows;j++){
			printf("%d\t",transpose[i][j]);
		}
	printf("\n");
	}
return 0;
}
