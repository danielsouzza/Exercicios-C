#include <stdio.h>
#include <stdlib.h>


void calc_esfera(float R, float *area, float *volume)
{
    float pi = 3.14;
    *area = 4 * pi * (R*R);
    *volume = 4/3 * pi * (R*R*R);
}
int main()
{
    float area, volume, R;

    printf("Enter the radius\n");
    scanf("%f", &R);
    calc_esfera(R, &area, &volume);
    printf("A área da esfera e = [%4.2f]\n", area);
    printf("O volume da esfera e = [%4.2f]\n", volume);
    return 0;
}