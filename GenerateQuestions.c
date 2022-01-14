#include "GenerateQuestions.h"

// Get length
static int Length(char* array);

// The string of what to find in where and starting where. 
int Find(char ch, char* in, int spos);

// Making it static keeps it to this file only.
static int Length(char* array)
{
    int len = strlen(array);

    return len;
}

void Factorising() 
{
    int num1, num2;

    char* Q = "x^2 + nx + c";

    int pos = Length(Q);//Find("n", Q, 0);

    out(pos);
    
    printf("\n%s", Q);
}

char* GenerateQuestionType(unsigned int type) 
{
    char* Q = malloc(sizeof(char*) * 16);
    if(type & QUADRATIC)
    {
        strcpy(Q, "a^2 + na + c");
        int pos = Find('n', Q, 0);
        out(pos);
    }

    return Q;

}

int Find(char ch, char* in, int spos)
{
    int index = 0;

    for (int i = 0; i < Length(in); i++)
    {
        if(in[i] == ch)
        {
            index = i;
        }
    }
    

    return index;
}