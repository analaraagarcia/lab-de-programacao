#include <stdio.h>
#include <string.h>

int main(){
    int N, i, compra_casa = 0, compra_escritorio = 0, estoque_casa, estoque_escritorio;
    char ida[6], volta[6];
    scanf("%d", &N);
    estoque_casa = 0;
    estoque_escritorio = 0;
    for (i = 0; i < N; i++){
        scanf("%s %s", ida, volta);
        if (strcmp(ida, "chuva") == 0){
            if (estoque_casa == 0){
                compra_casa++;
                estoque_escritorio++;   
            } else {
                estoque_casa--;
                estoque_escritorio++;
            }
        } 
        
        if (strcmp(volta, "chuva") == 0){
            if (estoque_escritorio == 0){
                compra_escritorio++;
                estoque_casa++;
            } else {
                estoque_escritorio--;
                estoque_casa++;
            }
        } 
    }

    printf("%d %d\n", compra_casa, compra_escritorio);

    return 0;
}