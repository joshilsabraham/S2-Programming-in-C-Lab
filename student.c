#include <stdio.h>
#include <string.h>
struct employee {
	char name[50];
	int ID;
	float salary;
};

int main(){
	int n,i=0,j=0;
	printf("Enter the Number of Employees: ");
	scanf("%d",&n);
	struct employee employee[n];
	printf("Enter the employee details:\n");
	for(i=0;i<n;i++){
		printf("Employee %d Name: ",i+1);
		scanf("%s",&employee[i].name);
		printf("ID: ");
		scanf("%d",&employee[i].ID);
		printf("Salary: ");
		scanf("%f",&employee[i].salary);
	}
	printf("Employee Details: \n");
	for(i=0;i<n;i++){
		printf("Employee %d:\n",i+1);
		printf("Name: %s\n",employee[i].name);
		printf("ID: %d",employee[i].ID);
		printf("Salary: %.2f",employee[i].salary);
	}	
	return 0;
}
