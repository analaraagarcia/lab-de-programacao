#include <stdio.h>

int main(){
    int a, d; //atacantes e defensores
    int b[10000], c[10000];
    int jogador = 0;
    int menor;

    while (scanf("%d %d", &a, &d) && a!= 0 && d != 0){
        for (int i = 0; i < a; i++){
            scanf("%d", &b[i]);
        }

        for (int i = 0; i < d; i++){
            scanf("%d", &c[i]);
        }

        menor = b[0];
        jogador = 0;
        for (int i = 1; i < a; i++){
            if (b[i] < menor){
                menor = b[i];
            }
        }
            
        for (int j = 0; j < d; j++){
            if (c[j] <= menor){
                jogador++;
            }
        }
    
        if (jogador >= 2){
            printf("N\n");
        }else {
            printf("Y\n");
        }
    }
    
    return 0;
}