#include <stdio.h>
#include <stdlib.h>
#include "final-project/console input.h"

int main() {

	int xInput = getXInput();
	int yInput = getYInput();
	int boardS = 3;

	validateCoordinates(xInput, yInput, boardS);

	return 0;
}