#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int c, n, fact = 1;
  scanf("%d", &n);
  n<=12;
  for (c = 1; c <= n; c++) {
  fact = fact * c;}
  printf("%d", fact);
  return 0;

}
