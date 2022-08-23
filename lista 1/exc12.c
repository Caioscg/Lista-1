#include <stdio.h>
int main (){
double R;
int p, c, e; 
scanf("%lf %d %d %d", &R, &p, &c, &e);
if (R/p<=1405.5 && c==2 && e==4) printf("ALUNO COTISTA (L1)\n");
else if (R/p<=1405.5 && c==2 && e!=4) printf("ALUNO COTISTA (L2)\n");
else if (R/p>1405.5 && c==2 && e==4) printf("ALUNO COTISTA (L3)\n");
else if (R/p>1405.5 && c==2 && e!=4) printf("ALUNO COTISTA (L4)\n");
else printf("ALUNO NAO COTISTA\n");
 
    return 0;
}