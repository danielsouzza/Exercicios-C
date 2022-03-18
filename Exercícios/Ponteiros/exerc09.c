#include <stdio.h>
#include <stdlib.h>

void main()
{
    float *fptr; int i;
    float matriz[3][3] = {
        {3.1, 6.1, 9.1},
        {3.2, 6.2, 9.2},
        {3.3, 3.3, 9.3}
        };
    for(i = 0 ,fptr = &matriz; i < 9; fptr++, i++)
    {
        printf("O endereço de [%4.2f] = [%d]\n", *fptr, fptr);
    }
}