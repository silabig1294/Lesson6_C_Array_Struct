#include <stdio.h>
 
int main(int argc, char *argv[]) {
	int i;
	int data[6] = {200, 400, 600, 800, 1000, 1200};

	size_t count = sizeof(data) / sizeof(int);
	printf("Size : %d", count);
	
	return 0;
}
