#include <stdio.h>
 
int main(int argc, char *argv[]) {
	int i, j;
	int data[5] = {10, 20, 30, 40, 50};
	int data_copy[5];

	for(i=0;i<5;i++)
	{
		data_copy[i]=data[i];
	}

	for(j=0;j<5;j++)
	{
		printf("Data Copy : %d\n", data_copy[j]);
	}
	
	return 0;
}
