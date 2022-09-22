#include <stdio.h>

struct Customer {
	int CustomerID; 
	char FullName[100];
	float Salary; 
};

int main(int argc, char *argv[]) {
	struct Customer c; 
	c.CustomerID = 1001;
	strcpy(c.FullName,"Suphachai Somphanit");
	c.Salary = 15000;

	printf("CustomerID : %d\n", c.CustomerID);
	printf("FullName : %s\n", c.FullName);
	printf("Salary : %f", c.Salary);
	
	return 0;
}


