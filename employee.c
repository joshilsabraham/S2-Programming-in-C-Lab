/*
Name: Joshil S Abraham
Date:
Description: This program is used to store and display employee details using structures in C.
*/

#include <stdio.h>
#include <string.h>

struct employee {
    char name[50];
    int ID;
    float salary;
};

int main(){
	int n,i=0,j=0;
	printf("Enter the Number of Employees:");
	scanf("%d",&n);
    struct employee employee[n];
    printf("Enter the Employee Details:\n");
    for(i=0;i<n;i++){
        printf("Employee %d:\n", i+1);
        printf("Name: ");
        scanf("%s", employee[i].name);
        printf("ID: ");
        scanf("%d", &employee[i].ID);
        printf("Salary: ");
        scanf("%f", &employee[i].salary);
    }
    printf("\nEmployee Details:\n");
    for(i=0;i<n;i++){
        printf("Employee %d:\n", i+1);
        printf("Name: %s\n", employee[i].name);
        printf("ID: %d\n", employee[i].ID);
        printf("Salary: %.2f\n", employee[i].salary);
    }
    return 0;
}					
