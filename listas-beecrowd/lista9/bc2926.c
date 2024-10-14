#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void repete_letra(char *frase, int numero, char *frase_aux) {
    int pos_aux = 0;
    int tam = strlen(frase);

    for (int i = 0; i < tam; i++) {
        frase_aux[pos_aux++] = frase[i];
        if (frase[i] == 'a') {
            for (int j = 0; j < numero - 1; j++) {
                frase_aux[pos_aux++] = 'a';
            }
        }
    }
    frase_aux[pos_aux] = '\0';
}

int main() {
    int I;
    scanf("%d", &I);

    char frase[16] = "Entao eh Natal!";

    int tam = strlen(frase);
    int a_count = 0;
    for (int i = 0; i < tam; i++) {
        if (frase[i] == 'a') {
            a_count++;
        }
    }

    int novo_tam = tam + (a_count * (I - 1));

    char *frase_aux = (char *)malloc((novo_tam + 1) * sizeof(char));
    
    if (frase_aux == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    repete_letra(frase, I, frase_aux);

    printf("%s\n", frase_aux);

    free(frase_aux);

    return 0;
}
