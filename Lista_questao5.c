#include <stdio.h>

int euclides(int a, int d) {
  if (a == d) return a;
   
  else if (a > d) {
    if (a % d == 0) return d; 
    
    else return euclides(d, a % d);
  } 
  else {
    if (d % a == 0) return a;

    else return euclides(a, d % a);
  }
}

void entry(int i, int f) {
  int a, d;
  scanf("%d %d", &a, &d);

  printf("MDC(%d,%d) = %d\n", a, d, euclides(a, d));
  
  if (i < f-1) entry(i+1,f);  
}

int main(void) {
  int f;
  scanf("%d", &f);

  entry(0, f);
  return 0;
}