#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ordena(char nomes[][90], int n) {
    char aux[90];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcasecmp(nomes[i], nomes[j]) > 0) {
                strcpy(aux, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], aux);
            }
        }
    }
}

int main() {
    char criancas[1000][90];
    char aux[90];
    int i = 0;

    while (fgets(aux, 90, stdin) != NULL) {
        aux[strcspn(aux, "\n")] = 0;
        strcpy(criancas[i], aux);
        i++;
    }

    ordena(criancas, i);
    printf("%s\n", criancas[i-1]);

    return 0;
}