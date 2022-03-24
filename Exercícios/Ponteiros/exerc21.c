#include <stdio.h>

int main()
{
    float arry[5] = { 5.0, 6.8, 9.5, 4.5, 7.8, 7.5};
    float *pf;
    // suma +1 a cada elemento do array usando aritimética de ponteiros
    for(pf = &arry; *pf != arry[5]; pf++)
    {
        (*pf)++;
        printf("%4.2f\n", *pf);
    }
}