#include <stdio.h>

int somaarry(int *vetor0, int *vetor1, int *vetor2)
{
    int i;
    for(i = 0; i < 5; i++, vetor0++,vetor1++,vetor2++)
    {
        *vetor2 = (*vetor0) + (*vetor1);
        if (i == 4)
        {
            if (((*vetor0) > 0) && ((*vetor1) > 0)) return 1;
            else return 0;
        }
    }
    
}


int main(int argc, char const *argv[])
{
    int arry0[5] = {2, 3, 4, 5, 9};
    int arry1[5] = {4, 5, 9, 6, 1};
    int arry2[5];
    int rst;

    rst = somaarry(arry0,arry1,arry2);
    if (rst) 
    {
        printf("Os Arrys têm tamnhos iguais, somados com sucesso\n");
        for(int i = 0; i < 5; i++) printf("%d\n", arry2[i]);
    }
    else printf("Arrys de tamnhos diferntes\n");

    return 0;
}