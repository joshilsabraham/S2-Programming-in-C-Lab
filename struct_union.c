#include <stdio.h>
struct {
	int number;
	float decimal;
	char string[50];
}s;
union {
	int number;
	float decimal;
	char string[50];
}u;
int main(){
	struct s;
	union u;
	printf("The Size of Char = %lu\n",sizeof(char));
	printf("The Size of Struct 'Structure' = %lu\n", sizeof(s));
	printf("The Size of Union 'Union' = %lu\n", sizeof(u));
}
