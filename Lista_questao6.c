#include <stdio.h>

int bezout(int a, int b, int *x, int *y)
{
	if (a == 0)
	{
		*x = 0;
		*y = 1;
		return b;
	}

	int _x, _y;
	int mdc = bezout(b % a, a, &_x, &_y);

	*x = _y - (b/a) * _x;
	*y = _x;

	return mdc;
}

int main()
{
	int a, b;
    printf("Escreva 2 valores:\n");
	scanf("%d %d", &a, &b);
	int x, y;
	printf("MDC(%d, %d) =  %d\n", a, b, bezout(a, b, &x, &y));
	printf("s = %d, t = %d\n", x, y);
    printf("%d = %d*%d + %d*%d", bezout(a, b, &x, &y), x, a, y, b);
	return 0;
}