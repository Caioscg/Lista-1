#include <stdio.h> 
int main(){
  int n, b0, b1, b2, b3, b4, b5, b6, b7;
  scanf("%d", &n);
  if (n > 255 || n < 0) {
   printf("Numero invalido!\n");
  } else {
   b0= n%2;
   b1=(n/2)%2;
   b2=(n/4)%2;
   b3=(n/8)%2;
   b4=(n/16)%2;
   b5=(n/32)%2;
   b6=(n/64)%2;
   b7=(n/128)%2;
   printf("%d%d%d%d%d%d%d%d\n", b7, b6, b5, b4, b3, b2, b1, b0);
  }
 
    return 0;
}