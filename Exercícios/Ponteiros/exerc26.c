#include <stdio.h>
#include <math.h>

int raizes(float A,float B,float C,float * X1,float * X2)
{
    int delta;
    delta = pow(B,2) - 4 * A * C;
    if (delta < 0) return 0;
    if(delta == 0){
        *X1 = (-B + sqrt(delta)) / (2 * A);
        return 1;
    }else if (delta >= 0){
        *X1 = (-B + sqrt(delta)) / (2 * A);
        *X2 = (-B - sqrt(delta)) / (2 * A);
        return 2;
    }

}

int main()
{
    float A, B, C;
    float X1, X2;
    int rst;
    printf("Digite os valore de A,b e C: \n");
    scanf("%f %f %f", &A, &B, &C);

    rst =  raizes(A, B, C, &X1, &X2);

    if(rst == 0){
        printf("Não exite raiz real\n");
    }else if(rst == 1){
        printf("Só exite uma raiz = [%4.1f]\n", X1);
    }else if(rst == 2){
        printf("Contém duas raizes => X1 = [%4.1f] X2 = [%4.2f]\n", X1, X2);
    }
    return 0;
}