#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>


void displayIntro();
int chooseCave();
void checkCave(int chosenCave);


int main() {
	int playAgain = 1;

	while (playAgain == 1) {

		displayIntro();

		int caveNumber = chooseCave();

		checkCave(caveNumber);

		printf("Do you want to play again? (y (1) or (2)n\n");
		scanf("%d", &playAgain);

	}
    return 0;
}

void displayIntro() {
	printf("You re in a land full of dragons. In front of you,");
	printf("you see two caves. In one cave, the dragon is friendly");
	printf("and will share his treasure with you. The other dragon");
	printf("is greedy and hungry, and will eat you on sight.");
	printf("\n");
}

int chooseCave() {
	int cave = 0;
	while (cave != 1 && cave != 2) {
		printf("Which cave wil you go into? (1 or 2)\n");
		scanf("%d", &cave);
	}

	return cave;
}

void checkCave(int chosenCave) {
	printf("You approach the cave...\n");
	Sleep(2000);
	printf("It is dark and spooky...\n");
	Sleep(2000);
	printf("A large dragon jumps out in front of you! He opnes his jaws and...");
	printf("\n");
	Sleep(2000);

	srand(time(NULL));
	int rand_Num = 1 + rand() % 1;
	int friendlyCave = rand_Num;

	if (chosenCave == friendlyCave) {
		printf("Gives you his treasure!\n");
	}
	else {
		printf("Gobles you down in one bite!\n");
	}
}