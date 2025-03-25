#include <stdio.h>
void inputMatrix(int matrix[10][10],int rows,int columns){
	int i,j;
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			scanf("%d",&matrix[i][j]);
		}
}
}
void matrixAddition(int matrix1[10][10],int matrix2[10][10],int rows,int columns){	
	int result[rows][columns],i,j;
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			result[i][j]=matrix1[i][j]+matrix2[i][j];
		}
	}
	printf("Sum of Matrices:\n");
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			printf(" %d\t",result[i][j]);
		}
	printf("\n");
	}
}
int main(){
	int rows1,rows2,columns1,columns2;
	printf("Enter number of rows and columns of Matrix 1: ");
	scanf("%d%d",&rows1,&columns1);
	int matrix1[rows1][columns1];
	printf("Enter Elements of First Matrix:\n");
	inputMatrix(matrix1,rows1,columns1);
	printf("Enter number of rows and columns of Matrix 2: ");
	scanf("%d%d",&rows2,&columns2);
	int matrix2[rows2][columns2];
	printf("Enter Elements of Second Matrix:\n");
	inputMatrix(matrix2,rows2,columns2);
	if(rows1==rows2 & columns1==columns2){
		matrixAddition(matrix1,matrix2,rows1,columns2);
	}
	else{
		printf("Matrix Addition not possible as Rows and Columns are not equal");
	}
	return 0;
}
