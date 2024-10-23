#include <stdio.h>

int main() {
    int N, G, i, amizade[30], X, soma = 0;
    char runa[30], runas_escolhidas[30];

    scanf("%d %d", &N, &G);

    for (i = 0; i < N; i++) {
        scanf(" %c %d", &runa[i], &amizade[i]);
    }

    scanf("%d", &X);

    for (i = 0; i < X; i++) {
        scanf(" %c", &runas_escolhidas[i]);
    }

    for (i = 0; i < X; i++) {
        for (int j = 0; j < N; j++) {
            if (runas_escolhidas[i] == runa[j]) {
                soma += amizade[j];
                break;
            }
        }
    }

    if (soma >= G) {
        printf("%d\nYou shall pass!\n", soma);
    } else {
        printf("%d\nMy precioooous\n", soma);
    }


    return 0;
}