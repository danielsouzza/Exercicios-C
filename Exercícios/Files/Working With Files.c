#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *arq;
    char file[]="arquivo.txt";
    char msg[20], rst;
    int c ;

    arq = fopen(file, "w");
    if(arq == NULL) printf("Houve um problema ao criar o arquivo\n");

    while (c != 0){
        printf("Digite uma palavra: ");
        gets( msg);
        if (msg[0] == '0') {
            fclose(arq); 
            c = 0;
        }
        fwrite(msg, sizeof(char), strlen(msg),arq);
        stpcpy(msg, "");
    }

    arq = fopen(file, "r");
    if(arq == NULL){
        printf("Houve um problema com o arquivo\n");
        exit(1);
    }

    while ((rst = fgetc(arq)) != EOF)
    {
        printf("%c", rst);
    }
    printf("\n");
    return 0;

}