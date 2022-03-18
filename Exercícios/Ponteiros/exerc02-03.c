#include <stdio.h>
#include <stdlib.h>


int main()
{
    int x ,y;
    int *px, *py;
    px = &x;
    py = &y;
    printf("Enter two number\n");

    scanf("%d %d", &(*px), &(*py));
    if(&px > &py)        printf("[%d]] Tem o maio endereço == %d\n", x, px);
    else if (&py > &px)  printf("[%d] Tem o maio endereço == %d\n", y, py);

    return 0;
}
