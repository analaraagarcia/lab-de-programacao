#include <stdio.h>

int main() {
    int N, i, anao = 0, elfo = 0, humano = 0, mago = 0, hobbit = 0;
    char nome[20], tipo;
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%s %c", nome, &tipo);
        if (tipo == 'A') {
            anao++;
        } else if (tipo == 'E') {
            elfo++;
        } else if (tipo == 'H') {
            humano++;
        } else if (tipo == 'M') {
            mago++;
        } else {
            hobbit++;
        }
    }

    printf("%d Hobbit(s)\n%d Humano(s)\n%d Elfo(s)\n%d Anao(oes)\n%d Mago(s)\n", hobbit, humano, elfo, anao, mago);

    return 0;
}