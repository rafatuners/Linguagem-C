#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N, i, cobaias, totalcoelhos, totalratos, totalsapos, totalcobaias;
  char tipo;
  double pcoelho, pratos, psapos;

  printf("Quantos casos de teste serao digitados? ");
  scanf("%d", &N);

  totalcobaias = 0;
  totalcoelhos = 0;
  totalratos = 0;
  totalsapos = 0;

  for (i = 1; i <= N; i++){
    printf("Quantidade de cobaias: ");
    scanf("%d", &cobaias);
    printf("Tipo de cobaia: ");
    scanf(" %c", &tipo);



    totalcobaias = totalcobaias + cobaias;

    if (tipo == 'C'){
        totalcoelhos = totalcoelhos + cobaias;
    }
    else if (tipo == 'R'){
        totalratos = totalratos + cobaias;
    }
    else if (tipo == 'S'){
        totalsapos = totalsapos + cobaias;
    }
    }

   printf("RELATORIO FINAL:\n");
   printf("Total: %d\n", totalcobaias);
   printf("Total de coelhos: %d\n", totalcoelhos);
   printf("Total de ratos: %d\n", totalratos);
   printf("Total de sapos: %d\n", totalsapos);

   pcoelho = (double)(totalcoelhos * 100) / totalcobaias;
   pratos = (double)(totalratos * 100) / totalcobaias;
   psapos = (double)(totalsapos * 100) / totalcobaias;

   printf("Percentual de coelhos: %.2lf\n", pcoelho);
   printf("Percentual de ratos: %.2lf\n", pratos);
   printf("Percentual de sapos: %.2lf\n", psapos);















    return 0;
}
