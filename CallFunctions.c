#include <CallFunctions.h>

int add(int a, int b)
{
    return a + b;
}

int CallFunction(int (*add) (int, int), int x, int y) 
{
    return add(x, y);
}