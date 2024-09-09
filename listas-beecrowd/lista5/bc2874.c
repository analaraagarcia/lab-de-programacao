#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <conio.h>

int main(){
    int N, i, j, expoente, tamanho;
    float codigo_ASCII;
    char B[10];

    while(scanf("%d", &N) != EOF){
        for (i = 0; i < N; i++){
            scanf("%s", B);
            expoente = 0;
            tamanho = strlen(B);
            codigo_ASCII = 0;
            for (j = tamanho - 1; j >= 0; j--){
                if (B[j] == '1'){
                    codigo_ASCII += pow(2, expoente);
                }
                expoente++;
            }
            printf("%c", (char)codigo_ASCII);
        }
        printf("\n");
    }

    return 0;
}