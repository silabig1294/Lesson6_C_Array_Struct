#include <stdio.h>
 
int main(int argc, char *argv[]) {
	char FirstName[20]; 
	char LastName[20];

	printf("Enter your first name : ");
	scanf("%s", FirstName);
	printf("Enter your last name : ");
	scanf("%s", LastName);

	printf("First Name : %s\n", FirstName);
	printf("Last Name : %s", LastName);	
	
	return 0;
}
