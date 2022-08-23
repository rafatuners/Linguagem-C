#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, M;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &N);

    for (i = 1; i <= 10; i++) {
        M = N * i;
        printf("%d x %d = %d\n", N, i, M);
}

    return 0;
}
