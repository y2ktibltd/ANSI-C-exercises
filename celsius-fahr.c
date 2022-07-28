#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    lower=0;
    upper=300;
    step=20;

    fahr=lower;
    printf("Cels\tFahr\nConverter\n");
    while (celsius<=upper) {
        fahr=(celsius*1.8)+32;
        printf("%3.0f\t%6.1f\n",celsius,fahr);
        celsius+=step;
    }
}
