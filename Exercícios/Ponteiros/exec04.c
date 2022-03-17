#include <stdio.h>
#include <stdlib.h>

void change(int *px, int *py);

int main()
{
    int x,y;
    
    printf("ENTER TWO NUMBER\n");
    scanf("%d %d", &x, &y);
    printf("[%d] = x <=> [%d] = y\n", x, y);
    change(&x, &y);
    printf("[%d] = x <=> [%d] = y\n", x, y);
    return 0;
}
void change(int *px,int *py)
{
    int z;
    z = *px; *px = *py; *py = z;
}