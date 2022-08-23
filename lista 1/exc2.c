#include <stdio.h>
 
int main() {
    double F, C, p, m;
    scanf("%lf%lf", &F, &p);
    C = 5*(F-32)/9;
    m = p*25.4;
    printf("O VALOR EM CELSIUS = %.2lf\nA QUANTIDADE DE CHUVA E = %.2lf\n", C, m);
return 0;
}