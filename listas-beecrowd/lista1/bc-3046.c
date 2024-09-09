#include <stdio.h>

int domino(int N){

    return ((N + 1) * (N + 2)) / 2;
}

void leNumero(int *N){
    scanf("%d", N);
}

int main(){

    int N;
    leNumero(&N);
    int pecas = domino(N);
    printf("%d\n", pecas);

    return 0;
}