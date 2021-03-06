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
This file launches the functions prototyped in "console input.h" to demo their functionality.

*/

#include <stdio.h>
#include <stdlib.h>
#include "final-project/console input.h"

int main() {

	int xInput = getXInput();
	int yInput = getYInput();
	int boardS = 3;
	validateCoordinates(xInput, yInput, boardS);

	int newX = getInputRange(0, 10);
	int newY = getInputRange(0, 10);
	validateCoordinates(newX, newY, boardS);

	int x3 = getXInput();
	int y3 = getYInput();
	confirmCoordinate(x3, y3);
	
	return 0;
}