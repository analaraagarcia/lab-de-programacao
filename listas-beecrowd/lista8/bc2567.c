#include <stdio.h>

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

int main(){
    int N, x[1000], i, nivel;
    while (scanf("%d", &N) != EOF){
        for (i = 0; i < N; i++){
            scanf("%d", &x[i]);
        }

        ordena(x, N);

        nivel = 0;
        for (i = 0; i < N / 2; i++){
            nivel += (x[N-i-1] - x[i]);
        }

        printf("%d\n", nivel);
    }


    return 0;
}