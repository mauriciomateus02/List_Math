#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void mdc(int x, int y, int divisores)
{
    if(y%divisores==0&&x%divisores==0)
    {
        printf("mdc(%d, %d) = %d\n", x, y, divisores);
    }
    else
    {
        mdc(x, y, divisores-1);
    }
}
int main()
{
    int a, n1, n2, resto, divisores;
    scanf("%d %d", &n1, &n2);
    if(n1>=n2)
    {
        divisores = n2;
    }
    else
    {
        divisores = n1;
    }
    for(a=1; a>0; a++)
    {
        resto = (n1*a) % n2;
        if(resto==0) break;
    }
    printf("mmc(%d, %d) = %d\n", n1, n2, n1*a);
    mdc(n1, n2, divisores);
    return 0;
}
