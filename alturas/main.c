#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, nmenores;
    double soma, media, percentualMenores;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    char nome[N][50];
    int idade[N];
    double altura[N];

    for (i = 0; i < N; i++){
        printf("Dados da %da pessoa:\n", i+1);
        printf("Nome: ");
        fseek(stdin,0,SEEK_END);
        gets(nome[i]);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf ("Altura: ");
        scanf("%lf", &altura[i]);
    }

    soma = 0;

    for (i = 0; i < N; i++){
        soma = soma + altura[i];
    }

    media = soma / N;

    printf("\n");
    printf("Altura média: %.2lf\n", media);

    nmenores =0;

    for (i = 0; i < N; i++){
        if (idade[i] < 16){
            nmenores = nmenores + 1;
        }
    }

    percentualMenores = ((double)nmenores / N) * 100.0;

    printf("Pessoas com menos de 16 anos: %.1lf%%\n", percentualMenores);

    for (i = 0; i < N; i++){
        if (idade[i]<16){
            printf("%s\n", nome[i]);
        }
    }






    return 0;
}
