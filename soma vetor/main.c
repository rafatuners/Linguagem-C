#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, N;
    double soma, media;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    double vet[N];

    for (i = 0; i < N; i++){
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    printf("\nVALORES = ");
    soma = 0;

    for (i = 0; i<N;i++){
        printf("%.1lf ", vet[i]);
        soma = soma + vet[i];
    }

    printf("\nSOMA = %.2lf\n", soma);

    media = soma / N;

    printf("MEDIA = %.2lf\n", media);







    return 0;
}
