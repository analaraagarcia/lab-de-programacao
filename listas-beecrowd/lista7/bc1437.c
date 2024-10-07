#include <stdio.h>
#include <string.h>

int main(){
    int N, i, posicao;
    char lixo, letra;

    while (scanf("%d%c", &N, &lixo) != 0){
        if (N == 0){
            break;
        }

        posicao = 0;
        for (i = 0; i < N; i++){
            scanf("%c", &letra);
            if (letra == 'D'){
                if (posicao == 3){
                    posicao = 0;
                } else {
                    posicao++;
                }
            } else if (letra == 'E'){
                if (posicao == 0){
                    posicao = 3;
                } else {
                    posicao--;
                }
            }
        }

        if (posicao == 0){
            printf("N\n");
        } else if (posicao == 1){
            printf("L\n");
        } else if (posicao == 2){
            printf("S\n");
        } else if (posicao == 3){
            printf("O\n");
        }

    }

    return 0;
}