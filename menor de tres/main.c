#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primeiro, segundo, terceiro, menor;

    printf("Primeiro valor: ");
    scanf("%d", &primeiro);
    printf("Segundo valor: ");
    scanf("%d", &segundo);
    printf("Terceiro valor: ");
    scanf("%d", &terceiro);

    if (primeiro < segundo && primeiro < terceiro){
        menor = primeiro;

    }
    else if (segundo < terceiro){
        menor = segundo;

    }
    else {
        menor = terceiro;
    }

    printf("MENOR = %d\n", menor);

    return 0;
}
