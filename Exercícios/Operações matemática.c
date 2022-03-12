#include <stdio.h>

const int size = 20;

int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
int divide(int num1, int num2);
void menu();

int main()
{
    int x, y, choice, result;
    int(*operation[4])(int, int);

    operation[0] = add;
    operation[1] = subtract;
    operation[2] = multiply;
    operation[3] = divide;

    menu();
    printf("choice an opition: ");
    scanf("%d", &choice);
    printf("Enter with two numbers: ");
    scanf("%d %d", &x, &y);
    result = operation[choice](x, y);
    printf("Resulatado: %d", result);
    printf("\n");

    return 0;
}
void menu(){

    printf("=====================\n");
    printf("         MENU        \n");
    printf("=====================\n");
    printf("[0]- Adition\n");
    printf("[1]- Subtract\n");
    printf("[2]- Multiply\n");
    printf("[3]- Divide\n");
    printf("=====================\n");
}

int add(int num1, int num2){
    return(num1 + num2);
}

int subtract(int num1, int num2){
    return(num1 - num2);
}

int multiply(int num1, int num2){
    return(num1 * num2);
}
int divide(int num1, int num2){
    return(num1 / num2);
}