#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comp(int var1, int rand_Num);

int main() {
	int var1;
	srand(time(NULL));
	int rand_Num = rand() % 100;
	printf("%d \n", rand_Num);

	printf("Number = ?\n");
	scanf("%d", &var1);
	
	int answer = comp(var1, rand_Num);

	while (answer != 0) {
		printf("Number = ?\n");
		scanf("%d", &var1);
		answer = comp(var1, rand_Num);
	}

	system("PAUSE");
	return 0;

}

int comp(int var1, int rand_Num) {
	if (var1 > rand_Num) {
		printf("Smaller than %d \n", var1);
		int a = 1;
		return a;
	}
	else if (var1 < rand_Num) {
		printf("Larger than %d \n", var1);
		int a = -1;
		return a;
	}
	else if (var1 == rand_Num) {
		printf("Yes. Right. \n");
		int a = 0;
		return a;
	}

}