#include <stdio.h>

int main(){

    int N, menor, posicao;
    int x[1000];

    scanf("%d", &N);

    for (int i = 0; i < N; i++){
        scanf("%d", &x[i]);
    }

    menor = x[0];
    posicao = 0;
    
    for (int i = 0; i < N; i++){
        if (x[i] < menor){
            menor = x[i];
            posicao = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);
    
    return 0;
}