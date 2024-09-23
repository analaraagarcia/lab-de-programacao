#include <stdio.h>
#include <string.h>

int main(){
    int N, j, tam, desloc;
    char texto[51], lixo;
    scanf("%d%c", &N, &lixo);

    while(N > 0){
        gets(texto);
        tam = strlen(texto);
        scanf("%d%c", &desloc, &lixo);

        for (j = 0; j < tam; j++){
            if (texto[j] - desloc >= 65){
                printf("%c", texto[j] - desloc);
            } else {
                printf("%c", texto[j] - desloc + 26);
            }
        }
        printf("\n");
        N--;
    }

    return 0;
}