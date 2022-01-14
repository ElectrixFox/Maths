#ifndef OPERATIONS_H

#define OPERATIONS_H

#include <stdlib.h>
#include <stdio.h>

typedef struct Factors
{
    int* x;
    int* y;
} Factors;

Factors GetFactors(int numb);

#endif