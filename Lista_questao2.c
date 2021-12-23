#include <stdio.h>
#include <time.h>

int primo(int i)
{
    int cont, j = 0;

    for (cont = 1; cont <= i; cont++)
    {
        if (i % cont == 0)
        {
            j++;
        }
    }

    return j;
}

int main()
{
    clock_t tic = clock();
    int i = 1, j;

    while ((double)tic / 1000 <= 60)
    {
        i++;

        j = primo(i);
        if (j == 2)
        {
            printf("%d\n", i);
        }
        tic = clock();
    }
    return 0;
}