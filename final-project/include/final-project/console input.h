#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int getXInput();
int getYInput();
bool validateCoordinates(int xInput, int yInput, int boardSize);