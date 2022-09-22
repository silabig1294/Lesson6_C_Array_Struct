#include <stdio.h>
 
int main(int argc, char *argv[]) {
	int i;
	int data[5] = {200, 400, 600, 800, 1000};

	for(i=0;i<5;i++)
	{
		printf("Data is : %d\n", data[i]);
	}

	return 0;
}
