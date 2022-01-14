#include "Operations.h"

static int GetFactor(int numb, int pair);

static void LogFactors(Factors facts);

int len;

Factors GetFactors(int numb) 
{
    Factors fact;

    fact.x = malloc(sizeof(int*) * 128);
    fact.y = malloc(sizeof(int*) * 128);

    typedef struct PrivatePair
    {
        int x, y;
    } PrivatePair;

    const int max = 12;
    for (int i = 1; i < max; i++)
    {
        // Static int for a private count.
        static int PC = 0;

        int factor = GetFactor(numb, i);
        PrivatePair FactorPair = (factor != 0) ? (PrivatePair){i, factor} : (PrivatePair){0, 0};

        if(FactorPair.x != 0)
        {
            if(FactorPair.x == fact.y[PC-1])
                break;

            fact.x[PC] = FactorPair.x;
            fact.y[PC] = FactorPair.y;
            PC++;

            len = PC;
        }
    }
}

static int GetFactor(int numb, int pair) 
{
    // Checks to see if it returns a 0 on modulus and if so then returns the factor as it is valid.
    return (numb % pair == 0) ? numb / pair : 0;
}

void LogFactors(Factors facts) 
{
    for(int i = 0; i < len; i++)
        printf("\nFactors: %d and %d", facts.x[i], facts.y[i]);
}
