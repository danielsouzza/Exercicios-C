#include <stdio.h>
#include <string.h>

char print(char *strr)
{
    for(; *strr != '\0'; strr++)
        printf("%c", *strr);
}

int main()
{
    char msg[10];
    fgets(msg, 10, stdin);
    print(&msg);
    printf("\n");
    exit(1);
}