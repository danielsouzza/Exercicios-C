#include <stdio.h>
#include <string.h>

int main()
{
    int a,*b,**c,***d;
    printf("Enter a number: \n");
    scanf("%d", &a);
    b = &a;
    printf("O dobro de [%d] = [%d]\n", a, (*b * 2));
    c = &b;
    printf("O triplo de [%d] = [%d]\n", a, (**c * 3));
    d = &c;
    printf("O quádruplo de [%d] = [%d]\n", a, (***d * 4));
}