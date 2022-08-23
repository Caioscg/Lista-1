#include <stdio.h> 
int main(){
double a, b, c, t;
  scanf("%lf%lf", &a, &b);
   if (b < a) {
   t = a;
   a = b;
   b = t;
  }
   scanf("%lf", &c);
  if (c < a) {
   t = c;
   c = b;
   b = a;
   a = t;
  }
  if (c < b) {
   t = c;
   c = b;
   b = t;
  }
 
  printf("%.2lf, %.2lf, %.2lf", a, b, c);
 
 
    return 0;
}