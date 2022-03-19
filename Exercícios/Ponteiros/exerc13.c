#include <stdio.h>
#include <string.h>

void check(char *word0, char *word1, char *nstr);

int main()
{
    char str0[20];
    char str1[20];
    char nstr[20];
    int i;
    printf("Enter two string: \n");
    gets(str0);
    gets(str1);
    check(&str0, &str1, &nstr);
    puts(nstr);
    return 0;
}


void check(char *str0, char *str1, char *nstr)
{
    for(;*str0 != '\0'; str0++){
        for(;*str1 != '\0'; str1++){
            if(*str0 == *str1){
                *nstr = *str0;
                nstr++;
            }
        }
    }
}