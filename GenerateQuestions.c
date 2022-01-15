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
        // Generates the quadratic question template.
        strcpy(Q, "a^2 + na + c");

        // Change all the a's to a symbol (e.g. x).
        {
            int pos = Find('a', Q, 0);
            Q[pos] = 'x';
            
            pos = Find('a', Q, pos);
            Q[pos] = 'x';
        }
        
        // Needs to change the n to a number.
        int pos = Find('n', Q, 0);

        // Generates a random number and finds a random factor for it.
        const int Root = rand() % 100;
        Factors facts = GetFactors(Root);

        out(Root);
        out(facts.y);
        
        //out(pos);
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