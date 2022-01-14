#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "BitTests.h"
#include "GenerateQuestions.h"
#include "Operations.h"

// ID is defined in another file so it can detect that using extern
extern int ID;

int main()
{
    printf("Hello World!");

    unsigned int flags = QUADRATIC;

    printf("\n%s", GenerateQuestionType(flags));

    //Run();

    return 0;
}