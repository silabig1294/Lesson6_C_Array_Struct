#include <stdio.h>
 
int main(int argc, char *argv[]) {
	char data[3][2] = {
			{'a','b'},
			{'1','2'},
			{'A','B'}
		};

	printf("R1 C1 : %c\n", data[0][0]);
	printf("R1 C2 : %c\n", data[0][1]);
	printf("--------------------------------------\n");
	printf("R2 C1 : %c\n", data[1][0]);
	printf("R2 C2 : %c\n", data[1][1]);
	printf("--------------------------------------\n");
	printf("R3 C1 : %c\n", data[2][0]);
	printf("R3 C2 : %c", data[2][1]);
	
	return 0;
}
