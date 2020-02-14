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
This file contains the prototypes for various input-handling and processing functions.

*/

#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Consumes nothing and produces an integer which the user enters from the console.
int getXInput();

// Consumes nothing and produces an integer which the user enters from the console.
int getYInput();

// Consumes two integers which represent (x, y) coordinates and a game board size.
// Determines if the coordinates reside within the game board.
bool validateCoordinates(int xInput, int yInput, int boardSize);

// Consumes a minimum and maximum value and returns a user input within the minimum and maximum.
int getInputRange(int min, int max);