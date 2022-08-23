#include <stdio.h>
#include <math.h>
int main () {
    float a, b, c, delta, x1, x2;
    scanf("%f%f%f", &a, &b, &c);
    delta = (b*b) - (4*a*c);
    x1 = (-b - sqrt(delta)) / (2*a);
    x2 = (-b + sqrt(delta)) / (2*a);
    if (delta < 0) { printf("RAIZES IMAGINARIAS\n");
    }
        else { if (delta == 0) { printf("RAIZ UNICA\nX1 = %.2f\n", x1);
        }
            else { if (x2>x1) { printf("RAIZES DISTINTAS\nX1 = %.2f\nX2 = %.2f\n", x1, x2);
            }
                else printf("RAIZES DISTINTAS\nX1 = %.2f\nX2 = %.2f\n", x2, x1);
            }
 
        }
    return 0;
}