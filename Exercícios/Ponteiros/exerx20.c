#include <stdio.h>

int negativos(float *vet, int n)
{
    int i, count = 0;
    for(i = 0; i < n; i++, vet++)
    {
        if (*vet < 0) 
            count++;
    }
    return count;
}

int main()
{
    int ngt;
    float arry[5];
    printf("Enter five numbers: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &arry[i]);
    }
    ngt = negativos(arry, 5);
    printf("%d negative numbers were entered\n", ngt);
    return 0;
}