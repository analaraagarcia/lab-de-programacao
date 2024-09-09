#include <stdio.h>

int main(){

    int n, m, maior, i, j, caso = 1;
    int x[1000];

    scanf("%d", &n);

    for (i = 0; i < n; i++){
        scanf("%d", &m);

        for (j = 0; j < m; j++){
            scanf("%d", &x[j]);
        }

        maior = x[0];

        for (j = 0; j < m; j++){
            if (x[j] > maior){
                maior = x[j];
            }
        }

        printf("Case %d: %d", caso, maior);
        caso++;

    }
    
    return 0;
}