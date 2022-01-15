#ifndef GENERATE_QUESTIONS_H

#define GENERATE_QUESTIONS_H

#include <stdio.h>
#include <stdlib.h>

#include <stdarg.h>
#include <string.h>

#include "Operations.h"

#define out(x) printf("\n%d", x)

#define QUADRATIC 0b1

void Factorising();

char* GenerateQuestionType(unsigned int type);

#endif