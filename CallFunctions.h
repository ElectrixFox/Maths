#pragma once
#include <stdio.h>
#include <stdlib.h>

// Calls add function.
// A function pointer returning a int taking in 2 ints
int CallFunction(int (*add) (int, int), int x, int y);

int add(int a, int b);