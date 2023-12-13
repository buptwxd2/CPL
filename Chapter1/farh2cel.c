#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

void main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0 ;      /* lower limit */
    upper = 300;    /* upper limit*/
    step = 20;

    for (fahr = LOWER; fahr < UPPER; fahr = fahr + 20)
    {
        printf("%3.0f\t%3.2f\n", fahr, (5.0/9.0) * (fahr - 32));
    }

}