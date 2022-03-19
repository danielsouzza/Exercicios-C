#include <stdio.h>
#include <string.h>

char strmove(char *msg, char trm)
{
    for(int i = 0; i < 10; i++, msg++)
    {
        *(msg) = trm;
    }
}

int main()
{
    char msg[10];
    char trm = 'D';
    strmove(&msg,trm);
    puts(msg);

}