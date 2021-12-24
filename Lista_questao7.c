#include <stdio.h>

int main(void) {
  int a, b;
  printf("Informe os valores de A e B (separados por um espaço): ");
  scanf("%d %d", &a, &b);

  for(int aN = 0; aN<=b-1;aN++) {
    if (a*aN % b == 1) {
      printf("O inverso de %d mod %d é %d\n", a, b, aN);
      break;
    }
  }
  return 0;
}