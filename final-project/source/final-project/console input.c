#include "final-project/console input.h"

int getXInput() {
	int userXInput;
	printf("Enter X value: ");
	scanf_s("%d", &userXInput);
	return userXInput;
}

int getYInput() {
	int userYInput;
	printf("Enter Y value: ");
	scanf_s("%d", &userYInput);
	return userYInput;
}

bool validateCoordinates(int xInput, int yInput, int boardSize) {
	if (xInput < 0 || xInput > boardSize) {
		printf("X value is not a valid spot on the board.");
		return false;
	}

	if (yInput < 0 || yInput > boardSize) {
		printf("Y value is not a valid spot on the board.");
		return false;
	}
}