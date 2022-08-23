x1.c | Submit ID: 2771 | Username: caioscg | Problem: 1

#include <stdio.h>
int main(){
 
 int n1, n2, n3, N, Nq;
 
  scanf("%d%d%d", &n1, &n2, &n3);
 
 if (n1 <=9 && n2 <=9 && n3<=9) {
 
    N = (100*n1) + (10*n2) + (n3);
    Nq = N*N;
    printf("%d, %d", N, Nq);
  }
 else {
     printf("DIGITO INVALIDO\n");
 }
 
return 0;
}