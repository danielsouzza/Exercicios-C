#include <stdio.h>


int maior(int *vetor, int n)
{
    int i, maior = *vetor;

    for(i = 0; i < n; i++, vetor++)
    {
        if (*vetor > maior) maior = *vetor;
    }
    return maior;
}

int main()
{
    int n, large = 0, k, i;
    int *arry;

    printf("Digite a quantidade de valores: \n");
    scanf("%d", &n);
    arry = malloc(n * sizeof(*arry));

    printf("Digite os %d números\n", n);
    for(i = 0; i < n; i++) scanf("%d", &arry[i]);

    large = maior(arry, n);
    printf("Quantos elementos por linha: ");
    scanf("%d", &k);

    for(int c = k,i = 0; i < n; i++){
        if(i == c)
        {
            printf("\n");
            c += k;
        }
        printf(" => %d",arry[i]);
    }
    printf("\nO maior número entre eles foi => %d\n", large);
    return 0;
}