#include <stdio.h>
#include <string.h>

int main(){
    int N, Q, E, A, B, i, redireciona = 0, vet[1001], aux;
    scanf("%d", &N);
    scanf("%d", &Q);

    for (i = 1; i <= N; i++){
        vet[i] = i;
    }

    for (i = 0; i < Q; i++){
        scanf("%d", &E);
        scanf("%d", &A);

        if (E == 1){
            scanf("%d", &B);
            aux = vet[A];
            vet[A] = vet[B];
            vet[B] = aux;
        } else if (E == 2){
            redireciona = 0;

            aux = vet[A];
            while (aux != A){
                aux = vet[aux];
                redireciona++;
            }

            printf("%d\n", redireciona);
        }

    }

    return 0;
}