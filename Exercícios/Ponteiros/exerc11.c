#include <stdio.h>
#include <stdlib.h>


void main()
{
    int matriz[5];
    int *ptr = &matriz, i;

    printf("Enter five numbers:\n");
    for(i = 0; i < 5; ptr++,i++)
    {
        printf("Typer the [%d] number:",i+1);
        scanf("%d", &(*ptr));
    }
    for(i = 0; i < 5; i++)
        if(i % 2 == 0) printf("[%d] indice par [%d]\n",i, matriz[i]);
}