#include <stdio.h>
#include <stdlib.h>

// dando runtime error :´(
typedef struct Lista *node;

struct Lista {
    int valor;
    node proximo;
};

node inserir(node lista, int valor) {
    node novo = (node)malloc(sizeof(struct Lista));
    if (novo == NULL){
        return lista;
    }
    novo->valor = valor;
    novo->proximo = lista;
    return novo;
}

node apenas_impares(node lista) {
    node nova = NULL;
    node atual = lista;
    
    while (atual != NULL) {
        if (atual->valor % 2 != 0) {
            nova = inserir(nova, atual->valor);
        }
        atual = atual->proximo;
    }

    while (lista != NULL) {
        node temp = lista;
        lista = lista->proximo;
        free(temp);
    }
    
    return nova;
}

int conta_impares(node lista) {
    int count = 0;
    while (lista) {
        if (lista->valor % 2 != 0) count++;
        lista = lista->proximo;
    }
    return count;
}

void ordena(node *lista) {
    if (*lista == NULL || (*lista)->proximo == NULL) {
        return;
    }

    int tam = conta_impares(*lista);
    if (tam == 0) {
        return;
    }

    int *valores = (int*)malloc(tam * sizeof(int));
    if (valores == NULL) {
        return;
    }

    node p = *lista;
    int i = 0, j;

    while (p && i < tam) {
        if (p->valor % 2 != 0) {
            valores[i++] = p->valor;
        }
        p = p->proximo;
    }

    for (i = 0; i < tam - 1; i++) {
        for (j = i + 1; j < tam; j++) {
            if (valores[i] < valores[j]) {
                int temp = valores[i];
                valores[i] = valores[j];
                valores[j] = temp;
            }
        }
    }

    int inicio = 0, fim = tam - 1;
    node nova = NULL;

    for (i = 0; i < tam; i++) {
        if (i % 2 == 0) {
            nova = inserir(nova, valores[inicio++]);
        } else {
            nova = inserir(nova, valores[fim--]);
        }
    }

    while (*lista) {
        node temp = *lista;
        *lista = (*lista)->proximo;
        free(temp);
    }

    *lista = nova;
    free(valores);

}

void mostra_lista(node lista) {
    while(lista) {
        printf("%d", lista->valor);
        lista = lista->proximo;
        if (lista->proximo != NULL) {
            printf(" ");
        }
    }
    printf("\n");
}

void libera_lista(node lista) {
    while (lista) {
        node temp = lista;
        lista = lista->proximo;
        free(temp);
    }
}

int main() {
    int N, M, i, j, valor;
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        node lista = NULL;
        scanf("%d", &M);

        for (j = 0; j < M; j++) {
            scanf("%d", &valor);
            lista = inserir(lista, valor);
        }

        lista = apenas_impares(lista);
        ordena(&lista);
        mostra_lista(lista);
        libera_lista(lista);
    }

    return 0;
}