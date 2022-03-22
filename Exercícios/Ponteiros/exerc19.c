#include <stdio.h>
#include <string.h>

const int size = 10;

void countMaior(int *vetor, int *maior,int *count)
{
    *maior = *vetor;
    for(int i = 1; i <= size; i++)
    {
        if(*(vetor+i) > *maior){
            *maior = *(vetor+i);
        }
    }
    for (int j = 0; j <= size; j++)
    {
        if (*(vetor+j)  == *maior) (*count)++;
    }
}


int main()
{
    int arry[]= {5, 2, 15, 3, 7, 15, 8, 6, 15,10};
    int maior=0, count=0;
    countMaior(&arry, &maior,&count);
    printf("O maior número foi [%d] e ele apareceu [%d] vezes\n", maior, count);
    return 0;
}