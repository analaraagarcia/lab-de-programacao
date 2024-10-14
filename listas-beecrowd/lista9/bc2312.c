#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[20];
    int ouro;
    int prata;
    int bronze;
} Paises;

void troca(Paises *a, Paises *b) {
    Paises temp = *a;
    *a = *b;
    *b = temp;
}

int compara_paises(Paises a, Paises b) {
    if (a.ouro != b.ouro) {
        return a.ouro > b.ouro;
    }

    if (a.prata != b.prata) {
        return a.prata > b.prata;
    }

    if (a.bronze != b.bronze) {
        return a.bronze > b.bronze;
    }

    return strcmp(a.nome, b.nome) < 0;
}

void ordena_paises(Paises *pais, int N) {
    int i, j, max_idx;

    for (i = 0; i < N - 1; i++) {
        max_idx = i;
        for (j = i + 1; j < N; j++) {
            if (!compara_paises(pais[max_idx], pais[j])) {
                max_idx = j;
            }
        }

        if (max_idx != i) {
            troca(&pais[i], &pais[max_idx]);
        }
    }
}

int main() {
    int N, i;
    Paises *pais;

    scanf("%d", &N);

    pais = (Paises *)malloc(N * sizeof(Paises));
    if (pais == NULL) {
        fprintf(stderr, "Erro ao alocar memória\n");
        return 1;
    }

    for (i = 0; i < N; i++) {
        scanf("%s %d %d %d", pais[i].nome, &pais[i].ouro, &pais[i].prata, &pais[i].bronze);
    }

    ordena_paises(pais, N);

    for (i = 0; i < N; i++) {
        printf("%s %d %d %d\n", pais[i].nome, pais[i].ouro, pais[i].prata, pais[i].bronze);
    }

    free(pais);

    return 0;
}
