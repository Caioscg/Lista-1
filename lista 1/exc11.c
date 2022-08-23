#include <stdio.h>
int main() {
 double a, b, c, d, x;
    scanf("%lf %lf", &a, &b);
    if (a>b) {
      x=a;
      a=b;
      b=x;
    } scanf("%lf", &c);
    if (c<a) {
      x=c;
      c=b;
      b=a;
      a=x;  
    } else if (c<b) {
        x=c;
        c=b;
        b=x;
      } scanf("%lf", &d);
      if (d<a) {
          x=d;
          d=c;
          c=b;
          b=a;
          a=x;
      }  else if (d<b) {
          x=d;
          d=c;
          c=b;
          b=x;
        }   else if (d<c) {
             x=d;
             d=c;
             c=x;
            } printf("%.2lf, %.2lf, %.2lf, %.2lf\n", a, b, c, d);
 
    return 0;
}