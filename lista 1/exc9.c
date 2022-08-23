#include <stdio.h>
int main() {
 
    int a, b, c, d, e, n;
    scanf("%d", &n);
    if (n<1000) {
      a = n/100;
      b = (n%100)/10;
      c = n%10;
      if (a == c) {
          printf("PALINDROMO\n");
      }  else printf("NAO PALINDROMO\n");
    }
 
    else if (n<10000) {
            a = n/1000;
            b = (n%1000)/100;
            c = (n%100)/10;
            d = n%10;
            if (a == d && b == c) {
              printf("PALINDROMO\n");
            }  else printf("NAO PALINDROMO\n");
          }
    
        else if (n<100000) {
                 a = n/10000;
                b = (n%10000)/1000;
                c = (n%1000)/100;
                d = (n%100)/10;
                e = n%10;
                if (a == e && b == d) {
                  printf("PALINDROMO\n");
                }  else printf("NAO PALINDROMO\n");
              }
            else if (n>99999) {
                printf("NUMERO INVALIDO\n");
            }
    return 0;
}