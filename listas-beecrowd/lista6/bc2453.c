#include <stdio.h>
#include <string.h>

int main(){
    char texto[1001];
    int i, tam;

    gets(texto);
    tam = strlen(texto);

    for (i = 0; i < tam - 1; i++){
        if (texto[i] ==  ' '){
            printf(" ");
        }
        if (texto[i] == 'p'){
            printf("%c", texto[i + 1]);
            i++;
        }
    }
    printf("\n");
    
    return 0;
}