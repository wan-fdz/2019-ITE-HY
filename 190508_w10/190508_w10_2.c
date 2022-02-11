#include <stdio.h>

int main() {
	int user_Num;
	printf("Input dan \n");
	scanf("%d", &user_Num);
	int cont = 1;
	int result;


	while (cont <= 9) {
		result = user_Num * cont;
		printf("%d * %d = %d \n", user_Num, cont, result);
		cont += 1;
	}


	system("PAUSE");
	return 0;
}