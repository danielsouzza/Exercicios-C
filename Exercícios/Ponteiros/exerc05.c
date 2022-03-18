#include <stdio.h>
#include <stdlib.h>

void maior_menor(int *px, int *py);

int main()
{
    int x, y;

    printf("Enter two number\n");
    scanf("%d %d", &x, &y);
    printf("X = [%d]\nY = [%d] ", x, y);
    maior_menor(&x, &y);
    printf("\nmaior = [%d]\nMenor = [%d]", x, y);
    return 0;
}
void maior_menor(int *px, int *py)
{
    int z;
    if (*px < *py) 
    {
        z = *px; 
        *px = *py;
        *py = z;
    }
}