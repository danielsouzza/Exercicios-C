#include <stdio.h>
#include <stdlib.h>

void soma(int *num1, int *num2);

int main()
{
    int var1;
    int var2;
    printf("Enter two number\n");
    scanf("%d %d", &var1, &var2);
    soma(&var1,&var2);
    printf("A soma das variáves = %d\n", var1);
    return 0;
}

void soma(int *num1, int *num2)
{
    *num1 = (*num1) + (*num2);
}