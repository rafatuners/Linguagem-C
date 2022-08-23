#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double A, B, C, X1, X2, delta;

    printf("Coeficiente A: ");
    scanf("%lf", &A);
    printf("Coeficiente B: ");
    scanf("%lf", &B);
    printf("Coeficiente C: ");
    scanf("%lf", &C);

    delta = pow(B, 2) - 4 * A * C;

    if (delta < 0 || A == 0){
        printf("Esta equacao nao possui raizes reais\n");
    }
    else {
        X1 = (- B + sqrt(pow(B, 2) - 4 * A * C)) / (2 * A);
        X2 = (- B - sqrt(pow(B, 2) - 4 * A * C)) / (2 * A);

        printf("X1 = %.4lf\n", X1);
        printf("X2 = %.4lf\n", X2);
    }

    return 0;
}
