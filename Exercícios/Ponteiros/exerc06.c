#include <stdio.h>
#include <stdlib.h>

void var_double(int *num1, int *num2);

int main()
{
    int var1;
    int var2;
    printf("Enter two number\n");
    scanf("%d %d", &var1, &var2);
    var_double(&var1,&var2);
    printf("O dobro de [var1] = %d\n", var1);
    printf("O dobro de [var2] = %d\n", var2);
    return 0;
}

void var_double(int *num1, int *num2)
{
    *num1 = 2 * (*num1);
    *num2 = 2 * (*num2);
}