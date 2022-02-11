#include <stdio.h>

int main()
{
	int space = 5;
	
	for (int i = 1; i <= 5; i++){

		for (int k = 0; k < space; k++){
			printf(" ");
		}

		for (int j = 0; j < 2 * i - 1; j++){
			printf("*");
		}

		space -= 1;
		printf("\n");
	}
    return 0;
}