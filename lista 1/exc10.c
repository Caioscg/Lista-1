#include <stdio.h>
int main () {
    int x1, x2, x3, a, b, c;
    char x, y, z, cod_a, cod_b, cod_c;
    scanf("%d %d %d\n", &x1, &x2, &x3);
    scanf("%c%c%c", &x, &y, &z);
    if (x1<x2 && x1<x3) a=x1;
    else if (x2<x1 && x2<x3) a=x2;
    else a=x3;
    if (x1>x2 && x1<x3) b=x1;
    else if (x1<x2 && x1>x3) b=x1;
    else if (x2<x1 && x2>x3) b=x2;
    else if (x2>x1 && x2<x3) b=x2;
    else if (x3>x1 && x3<x2) b=x3;
    else b=x3;
    if (x1>x2 && x1>x3) c=x1;
    else if (x2>x1 && x2>x3) c=x2;
    else c=x3;
 
    if (x==65 && y==66 && z==67) printf("%d %d %d", a, b, c);
    else if (x==65 && y==67 && z==66) printf("%d %d %d", a, c, b);
    else if (x==66 && y==65 && z==67) printf("%d %d %d", b, a, c);
    else if (x==66 && y==67 && z==65) printf("%d %d %d", b, c, a);
    else if (x==67 && y==65 && z==66) printf("%d %d %d", c, a, b);
    else printf("%d %d %d", c, b, a);
 
    return 0;
}