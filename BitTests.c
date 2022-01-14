#include "BitTests.h"

void Run() 
{
    // This is where all the flags data is kept.
    // To set the third feature you can add | 0b10000000
    unsigned int flags = 0b1 | 0b10 | 0b10000000;

    // | is bitwise OR so it checked if the first digit of 00000001 or 000000010 is 1 then it sets one then for 2nd digit if there is a 1 it sets it 1
    // Which because it is checking or you get in total the binary number: 10000011 for all 3 flags to be set

    // You can remove flags (set them to 0) using:
    flags  = flags & ~0b10;
    // Flags = Flags AND NOT 00000010

    // To re-enable:
    flags  = flags | 0b10;

    // This states if the flags 1st bit is not equal to 0.
    // Can also use the binary to check
    if((flags & 1) != 0 || (flags & 0b1) != 0)
        printf("\nCheck 1 Passed\n");


    // This states if the flags 2nd bit is not equal to 0.
    if((flags & 2) != 0)
        printf("Check 2 Passed\n");

    // Can be reduced by not checking if != 0 as if already does that
    if(flags & 0b10000000)
        printf("Check 3 Passed\n");
}

void Shift() 
{
    // Using << multiplies by 2 to the power of that number so 5 << 2 would be 20 as 5 * 2*2 = 20.
    // Using >> divides by 2 to the power of the number so 10 >> 1 would be 5 as 10 / 2*1 = 5.
    // Can use <<= or >>=

    // ^ is XOR which is if it is 0 or 1 return 1 but if 1 or 1 returns 0 So it needs different numbers.
    // ~ is NOT which is if 5 which is 101 is ~5 it would be 010. 
}
