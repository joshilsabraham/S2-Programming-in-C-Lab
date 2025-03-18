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
	printf("Matrix :\n");		
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}		
	
	//Identity Matrix
	int identity=0;
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			if(i!=j){
				if(matrix[i][j]==0){
					identity=identity+1;
				}
			}	
			if(i==j){
				if(matrix[i][j]==1){
					identity=identity+1;
				}
			}
		}
	}
	if(identity==0){
		printf("Not an Identity Matrix");
	}
	else if(identity==2){
		printf("Identity Matrix");
	}
	else{
	printf("Invalid");
	}
	return 0;
}
