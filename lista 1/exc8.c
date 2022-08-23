#include <stdio.h>
int main() {
    int a, b, c, n, ni;
    scanf("%d", &n);
    a = n/100;
    b = (n%100)/10;
    c = n%10;
 
    ni = c*100 + b*10 + a;
 
    printf("%d\n", ni);
 
    return 0;
}