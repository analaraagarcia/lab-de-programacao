#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M, i, bilhete, bilhetes_repetidos;

    while (1) {
        scanf("%d %d", &N, &M);
        if (N == 0 && M == 0) {
            break;
        }

        int *frequencia = (int*)calloc(N + 1, sizeof(int));
        if (frequencia == NULL) {
            printf("Erro ao alocar memoria\n");
            return 1;
        }

        for (i = 0; i < M; i++) {
            scanf("%d", &bilhete);
            frequencia[bilhete]++;
        }

        bilhetes_repetidos = 0;
        for (i = 1; i <= N; i++) {
            if (frequencia[i] > 1) {
                bilhetes_repetidos++;
            }
        }

        printf("%d\n", bilhetes_repetidos);

        free(frequencia);
    }

    return 0;
}
