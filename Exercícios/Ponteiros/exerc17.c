#include <stdio.h>

void frac(float num, int* inteiro, float* fra)
{
    *inteiro = (int)num;
    *fra = num - (*inteiro);
}

int main()
{
    float num; 
    float fra;
    int inteiro;
    
    scanf("%f", &num);
    frac(num,&inteiro,&fra);
    printf("A parte interira de [%4.2f] = [%d]\n", num, inteiro);
    printf("A parte interira de [%4.2f] e [%4.2f]\n", num, fra);
    return 0;
}