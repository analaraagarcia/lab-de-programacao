#include <stdio.h>
#include <stdlib.h>

void ordena(int *vetor, int tamanho){
    int i, j, aux, troca;
    troca = 1;
    for (i = 0; i < tamanho && troca; i++){
        troca = 0;
        for (j = 1; j < tamanho; j++){
            if (vetor[j] < vetor[j-1]){
                aux = vetor[j];
                vetor[j] = vetor[j-1];
                vetor[j-1] = aux;
                troca = 1;
            }
        }
    }
}

int main() {
    int N, *x, i;
    while (scanf("%d", &N) != EOF) {
        x = (int*)malloc(N * sizeof(int));
        for (i = 0; i < N; i++) {
            scanf("%d", &x[i]);
        }
        ordena(x, N);
        for (i = 0; i < N; i++) {
            if (x[i] < 10) {
                printf("000");
            } else if (x[i] >= 10 && x[i] < 100) {
                printf("00");
            } else if (x[i] >= 100 && x[i] < 1000) {
                printf("0");
            }
            printf("%d\n", x[i]);
        }
    }

    return 0;
}