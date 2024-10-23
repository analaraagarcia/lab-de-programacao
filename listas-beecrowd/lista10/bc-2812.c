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
    int N, M, i, j, x, aux[1000], cont, cont_inicio, cont_fim;
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &M);
        cont = 0;
        for (j = 0; j < M; j++) {
            scanf("%d", &x);
            if (x % 2 == 1) {
                aux[cont++] = x;
            }
        }

        ordena(aux, cont);
        cont_inicio = 0;
        cont_fim = cont - 1;
        for (j = 0; j < cont; j++) {
            if (j % 2) {
                printf("%d", aux[cont_inicio++]);
            } else {
                printf("%d", aux[cont_fim--]);
            }

            if (j != cont - 1) {
                printf(" ");
            }
        }

        printf("\n");

    }

    return 0;
}