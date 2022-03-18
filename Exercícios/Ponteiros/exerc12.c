#include <stdio.h>

int orden(int *x, int *y, int *z);

void main()
{
    int x, y, z;
    int func;
    printf("Enter three numbers: \n");
    scanf("%d %d %d", &x, &y, &z);

    func = orden(&x, &y, &z);

    if (func == 1)
        printf("Os valores são iguais !!!\n");
    else
        printf("[x] = [%d]\n[y] = [%d]\n[z] = [%d]\n", x, y, z);
}

int orden(int *px, int *py, int *pz)
{
    int change;
    if ((*px > *py) && (*px > *pz))
    {
        if (*py < *pz)
        {
            change = *pz;
            *pz = *px;
            *px = *py;
            *py = change;
        }
        else
        {
            change = *pz;
            *pz = *px;
            *px = change;
        }
    }
    else if ((*py > *px) && (*py > *pz))
    {
        if (*px < *pz)
        {
            change = *pz;
            *pz = *py;
            *py = change;
        }
        else
        {
            change = *pz;
            *pz = *py;
            *py = *px;
            *pz = change;
        }
    }
    else if ((*pz > *px) && (*pz > *py))
    {
        if (*px < *py)
        {
            return 0;
        }
        else
        {
            change = *py;
            *py = *px;
            *px = change;
        }
    }
    else
        return 1;
}