#include <stdio.h>

int main(){

    int n, c, s, comando[1000], posicao = 1, cont = 0;
    scanf("%d %d %d", &n, &c, &s);


    if (posicao == s){
        cont++;
    }

    for (int i = 0; i < c; i++){
        scanf("%d", &comando[i]);
    }

    for (int i = 0; i < c; i++){
        if (comando[i] == 1){
            if (posicao == n){
                posicao = 1;
            } else {
                posicao++;
            }

            if (posicao == s){
                cont++;
            }

        } else if (comando[i] == -1){
            if (posicao == 1){
                posicao = n;
            }else {
                posicao--;
            }
            if (posicao == s){
                cont++;
            }
        }
    }

    printf("%d\n", cont);

    return 0;
}