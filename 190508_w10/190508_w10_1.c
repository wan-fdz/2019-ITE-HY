#include <stdio.h>
#include <time.h>

int main() {
	char name[20];
	srand(time(NULL));
	int rand_Num = 1 + rand() % 20;
	int guess_Num;
	int guesses = 0;

	printf("Hello! What is your name? \n");
	scanf("%s", name);
	printf("Well, %s , I am thinking of a number between 1 and 20. \n",name);
	

	while (guesses <= 6) {
		printf("Take a guess. \n");
		scanf("%d", &guess_Num);
		
		if (guess_Num == rand_Num) {
			printf("Good job, %s! You guesses my number in %d guesses. \n",name,guesses);
			break;
		}
		else if (guess_Num < rand_Num) {
			printf("Your guess is too low. \n");
			guesses += 1;
		}
		else if (guess_Num > rand_Num) {
			printf("Your guess is too high. \n");
			guesses += 1;
		}
		
	}
	
	
	return 0;
}