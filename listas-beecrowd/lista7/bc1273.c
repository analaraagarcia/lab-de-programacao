#include <stdio.h>
#include <string.h>

int main(){
    int N, i, j, maior = 0, tam;
    int primeiro_caso = 1;
    char lixo, nome[51][51];
    while (scanf("%d%c", &N, &lixo) != 0){
        if (N == 0){
            break;
        }
        maior = 0;
        for (i = 0; i < N; i++){
            gets(nome[i]);
            tam = strlen(nome[i]);
            if (tam > maior){
                maior = tam;
            }
        }

        if (!primeiro_caso){
            printf("\n");
        }
        primeiro_caso = 0;

        for (i = 0; i < N; i++){
            tam = strlen(nome[i]);
            for (j = 0; j < maior - tam; j++){
                printf(" ");
            }
            printf("%s\n", nome[i]);
        }
    }

    return 0;
}