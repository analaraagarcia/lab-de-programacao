#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int m, n, p[99][99], soma, sacas, litros;

    while (scanf("%d %d", &m, &n) != EOF){
        
        sacas = 0;
        litros = 0;
        soma = 0;

        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                scanf("%d", &p[i][j]);
            }
        }

        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                soma += p[i][j];
            }
        }

        sacas = soma / 60;
        litros = soma % 60;
        
        printf("%d saca(s) e %d litro(s)\n", sacas, litros);

    }
    return 0;
}