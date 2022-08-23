#include <stdio.h>
int main(){
    int i;
    float a, b, c, t;
    scanf("%d %f %f", &i, &a, &b);
    if (a>b) {
        t=a;
        a=b;
        b=t;
    } scanf("%f", &c);
    if (c<a) {
        t=c;
        c=b;
        b=a;
        a=t;
    } if (c<b) {
        t=c;
        c=b;
        b=t;
    } if (i==1) printf("%.2f %.2f %.2f", a, b, c);
    else if (i==3) printf("%.2f %.2f %.2f", b, c, a);
    else printf("%.2f %.2f %.2f", c, b, a);
 
    
 
 
    return 0;