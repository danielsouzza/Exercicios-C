#include <stdio.h>
#include <string.h>

int check(char *str0, char *str1)
{
    int i , j, aux;
    for(i=0,j=0; *(str0 + i) != '\0';i++)
        while(*(str0 + i) == *(str1 + j))
        {
            i++, j++;
            if(*(str1 + j) == '\n' || *(str1 + j) == '\0')
                return 1;
            else if (*(str0 + i) != *(str1 + j))
                aux = 0;
        } 
    return aux;
}

int main()
{
    char str0[50];
    char str1[50];
    int rst;
    printf("Enter two string: \n");
    fgets(str0,50,stdin);
    fgets(str1,50,stdin);
    rst = check(&str0, &str1);
    if(rst == 1)
        printf("A segunda string esta contida na primeira string\n");
    else if (rst == 0)
        printf("A segunda string esta NÃO está contida na primeira string\n");

    return 0;
}