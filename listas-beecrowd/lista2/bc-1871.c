#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    int m=1, n=1, soma;
    char soma2[10000];

    do {
        scanf("%d %d", &m, &n);

        if (m == 0 && n == 0){
            break;
        }
        
        soma = m + n;

        sprintf(soma2, "%d", soma);

        int len = strlen(soma2);

        for (int i = 0; i < len; i++){
            if (soma2[i] != '0'){
                printf("%c", soma2[i]);
            }
        }
        printf("\n");

    } while (m != 0 && n != 0);

    return 0;
}