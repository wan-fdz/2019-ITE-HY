#include <stdio.h>
#include <stdlib.h>

void fibonacci(int num);
int sum(int n0, int n1);


int main() {
	int number;
	printf("Give me the number: \n");
	scanf("%d", &number);
	fibonacci(number);
	system("PAUSE");
	return 0;
}


void fibonacci(int num) {
	int totsum = 0;

	if (num == 0) {
		printf("0");

	}


	else if (num == 1) {
		printf("1");
	}


	else {
		int n0 = 0;
		int n1 = 1;

		for (int i = 2; i < num + 1; i++) {
			totsum = sum(n0, n1);
			n0 = n1;
			n1 = totsum;

		}

		printf("%d \n", totsum);
	}
}


int sum(int n0, int n1) {
	int answer = n0 + n1;
	return answer;
}

