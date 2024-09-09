#include <stdio.h>
#include <ctype.h>

int main(){

    int x, r, c, m, n, qtd[26], maior, soma, caso;
    int i, j;
    char letras[20][20];

    scanf("%d", &x);

    for (i = 0; i < x; i++){
        for (i = 0; i < 26; i++){
            qtd[i] = 0;
        }

        caso = 1;
        soma = 0;
        scanf("%d %d %d %d", &r, &c, &m, &n);

        for (i = 0; i < r; i++){
            for (j = 0; j < c; j++){
                scanf(" %c", &letras[i][j]);
                letras[i][j] = toupper(letras[i][j]);
                qtd[letras[i][j]-65]++;
            }
        }

        maior = qtd[0];

        for (i = 0; i < 26; i++){
            if (qtd[i] > maior){
                maior = qtd[i];
            }
        }

        for ( i = 0; i < 26; i++){
            if (qtd[i] == maior){
                soma += qtd[i] * m;
            } else {
                soma += qtd[i] * n;
            }
        }

        printf("Case %d: %d\n", caso, soma);
        caso++;
    }

    return 0;
}