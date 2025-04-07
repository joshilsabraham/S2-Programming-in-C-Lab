#include <stdio.h>
int main(){
	int rows,cols;
	printf("Enter number of rows and columns");
	scanf("%d",&rows);
	cols=rows;
	int i,j;
	int matrix1[rows][cols],matrix2[rows][cols],result[rows][cols];
	
	printf("Enter Elements of First Matrix:\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			scanf("%d",&matrix1[i][j]);
		}
	}	
	
	printf("Enter Elements of Second Matrix:\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			scanf("%d",&matrix2[i][j]);
		}
	}
	
	
	//Matrix Addition
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			result[i][j]=matrix1[i][j]+matrix2[i][j];
		}
	}
	
	printf("Sum of Matrices:\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf(" %d\t",result[i][j]);
		}
	printf("\n");
	}
return 0;
}
