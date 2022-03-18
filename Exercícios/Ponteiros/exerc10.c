#include <stdio.h>
#include <stdlib.h>

int * multiply(int *matriz);

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
    printf("=======================\n");
    ptr = multiply(&matriz);
    for(i = 0; i < 5; i++,ptr++)
        printf("O dobro de [%d] = [%d]\n",matriz[i], *ptr);
}

int * multiply(int *pm)
{
    int i;
    int mtr[5], *ptr;

    for(i = 0; i < 5; i++,pm++)
    {
        mtr[i] = (*pm) * 2;
    }
    ptr = &mtr;
    return (ptr);
}