#include <stdio.h>
int main(){
	int rows,columns;
	printf("Enter number of rows: ");
	scanf("%d",&rows);
	printf("Enter number of columns: ");
	scanf("%d",&columns);
	int i,j;
	int matrix[rows][columns];
	int trace=0;
	printf("Enter the Elements of Matrix:\n");
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("Matrix :\n");		
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}		
	
	//Trace
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			if(i==j){
				trace=trace+matrix[i][j];
			}
		}
	}
	
	printf("Trace of the Matrix is %d\n",trace);
	return 0;
}
