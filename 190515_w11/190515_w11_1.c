#include <stdio.h>
#include <stdlib.h>

int main() {
	int levels;
	int rows = 1;
	printf("Of how many levels do you want your pyramid?\n");
	scanf("%d", &levels);

	while (rows <= levels) {

		int space = 0;
		while (space < (2 * (levels-rows))) {
			printf(" ");
			printf("");
			space = space + 1;
		}

		int ast = 1, cont = 1;
		while (ast < (2 * rows)) {

			if (rows == levels) {
				printf("*");
				printf(" ");
				ast = ast + 1;

			}

			else {

				if (cont == 1 || cont == ((2 * rows) - 1)) {

					printf("*");
					printf(" ");
					ast = ast + 1;

				}
				else {
					printf(" ");
					printf(" ");
					ast = ast + 1;
				}



			}
			cont = cont + 1;

		}
		printf("\n");
		rows = rows + 1;


	}
	
	return 0;
}