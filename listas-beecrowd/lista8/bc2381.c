#include <stdio.h>
#include <string.h>

void ordena(char *nome[], int tam){
    int i, j, troca = 1;
    char *aux;
    for (i = 0; i < tam && troca; i++){
        troca = 0;
        for (j = 1; j < tam; j++){
            if (strcmp(nome[j], nome[j - 1]) < 0){
                aux = nome[j];
                nome[j] = nome[j - 1]; 
                nome[j - 1] = aux;
                troca = 1;
            }
        }
    }
}

int main(){
    int N, K, i;
    scanf("%d %d", &N, &K);
    
    char *nome[N];
    char buffer[101][21];

    for (i = 0; i < N; i++){
        scanf("%s", buffer[i]);
        nome[i] = buffer[i];
    }

    ordena(nome, N);
    
    printf("%s\n", nome[K - 1]);

    return 0;
}
