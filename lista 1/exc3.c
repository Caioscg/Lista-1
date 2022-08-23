#include <stdio.h>
int main(){
  double a, b, c, delta;
  scanf("%lf%lf%lf", &a, &b, &c);
  delta = (b*b) - (4*a*c);
  printf("O VALOR DE DELTA E = %.2lf", delta);
return 0;
}