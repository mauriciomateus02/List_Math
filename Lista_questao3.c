#include <stdio.h>

int primo(int i)
{
    int j, cont = 0;
    for (j = 1; j <= i; j++)
    {
        if (i % j == 0)
        {
            cont++;
        }
    }
    return cont;
}

void FatorPrimo(int i)
{
    int cont, j, sum = i;
    for (j = 1; j <= sum; j++)
    {
        cont = primo(j);
        if (cont == 2)
        {
            sum /= j;
            if (sum == 1)
            {
                printf(" %d", j);
            }
            else
            {
                printf(" %d x", j);
            }
            if (sum % j == 0)
            {
                sum /= j;
                printf(" %d x", j);
            }
        }
    }
}

int main()
{
    int i;
    scanf("%d", &i);
    FatorPrimo(i);
}