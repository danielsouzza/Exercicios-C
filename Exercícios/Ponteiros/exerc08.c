#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nums[] = {3.2, 6.2 ,9.2};
    float *fptr;

    for(fptr = &nums; *fptr <= 9.2; fptr++)
    {
        printf("O endereço de %4.2f = [%d]\n", *fptr, fptr);
    }

}