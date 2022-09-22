#include <stdio.h>
 
int main(int argc, char *argv[]) {
	int i;
	int data[5] = {1, 2, 3, 4, 5};
	float result = 0.0;

	for (i=0; i<5; i++)
	{ 
		result = result + data[i]; 
	}

	result = result / 5;
	printf("Average is : %.2f", result);
	
	return 0;
}
