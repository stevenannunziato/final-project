/*
MIT License

Copyright(c) 2020 stevenannunziato

Permission is hereby granted, free of charge, to any person obtaining a copy
of this softwareand associated documentation files(the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and /or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions :

The above copyright noticeand this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

Contributors: Steven Annunziato and Hannah Colquhoun
This file contains the definitions for various input-handling and processing functions.

*/

#include "final-project/console input.h"

// Consumes nothing and produces an integer which the user enters from the console.
int getXInput() {
	int userXInput;
	printf("Enter X value: ");
	scanf_s("%d", &userXInput);
	return userXInput;
}

// Consumes nothing and produces an integer which the user enters from the console.
int getYInput() {
	int userYInput;
	printf("Enter Y value: ");
	scanf_s("%d", &userYInput);
	return userYInput;
}

// Consumes two integers which represent (x, y) coordinates and a game board size.
// Determines if the coordinates reside within the game board.
bool validateCoordinates(int xInput, int yInput, int boardSize) {

	bool success = true;

	if (xInput < 0 || xInput > boardSize) {
		printf("X value is not a valid spot on the board.\n");
		success = false;
	}

	if (yInput < 0 || yInput > boardSize) {
		printf("Y value is not a valid spot on the board.\n");
		success = false;
	}

	return success;
}

// Consumes a minimum and maximum value and returns a user input within the minimum and maximum.
int getInputRange(int min, int max) {
	int input = -999;
	do {
		if (input != -999 && (input < min || input > max)) {
			printf("Invalid input.\n");
		}
		printf("Enter value between %d ", min);
		printf("and %d: ", max);
		scanf_s("%d", &input);
	} while (input < min || input > max);
	return input;
}