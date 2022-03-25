#include <stdio.h>

int minmax(int *vetor, int *min, int *max, int n)
{
    *max = *min = *vetor;
    for(int i = 0; i < n; i++, vetor++)
    {
        if ((*vetor) > (*max)) *max = *vetor;
        else if ((*vetor) < (*min)) *min = *vetor;
    }
    return 0;
}

int main()
{
    int *array;
    int max, min, t;
    printf("Digite a quantidade de números: \n");
    scanf("%d", &t);
    array = malloc(t * sizeof(*array));
    printf("Digite os %d elementos\n", t);
    for(int i = 0; i < t; i++) scanf("%d", &array[i]);
    minmax(array, &min, &max, t);
    printf("O maior número foi: %d\n", max);
    printf("O menor número foi: %d\n", min);
    return 0;
}