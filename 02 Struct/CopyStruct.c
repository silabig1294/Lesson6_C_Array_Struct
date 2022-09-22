#include <stdio.h>

struct Customer {
	int CustomerID; 
	char FullName[100];
	float Salary; 
};

int main(int argc, char *argv[]) {
	struct Customer c1; 
	struct Customer c2;
	
	c1.CustomerID = 1001;
	strcpy(c1.FullName,"Suphachai Somphanit");
	c1.Salary = 15000;

	c2 = c1;

	printf("CustomerID : %d\n", c2.CustomerID);
	printf("FullName : %s\n", c2.FullName);
	printf("Salary : %f", c2.Salary);
	
	return 0;
}


