#include <stdio.h>

void lernota(float *a, float *b, float *simp, float *pond)
{
    scanf("%f %f", &(*a), &(*b));
    *simp = ((*a + *b) / 2);
    *pond = (*a + (*b) * 2) / 3;
}
int main()
{
    float nota0, nota1;
    float medsim, medpond;
    lernota(&nota0, &nota1, &medsim, &medpond);
    printf("A média simples = %.2f\n", medsim);
    printf("A média ponderada = %.2f\n", medpond);
    return 0;
}