#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int x = 5, *px;
    float y = 3.14, *py;
    char a[]= "Hello";
    char *pa;

    px = &x;
    py = &y;
    pa = &a;
    printf("Variaves ates de ser modificadas\n");
    printf("[px] = %d\n", x);
    printf("[py] = %4.2f\n", y);
    printf("[pa] = %s\n", a);

    *px = 10;
    *py = 6.02;
    stpcpy(pa, "hello world");
    printf("Variaves apos de ser modificadas\n");
    printf("[px] = %d\n", x);
    printf("[py] = %4.2f\n", y);
    printf("[pa] = %s\n", a);
    return 0;
}