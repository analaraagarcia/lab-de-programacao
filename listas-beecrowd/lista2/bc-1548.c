#include <stdio.h>

int main(){

    int n, m, p[1000], q[1000], nao_troca = 0, menor;

    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        scanf("%d", &m);

        nao_troca = 0;

        for (int j = 0; j < m; j++){
            scanf("%d", &p[j]);
            q[j] = p[j];
        }

        for (int j = 0; j < m; j++){
            for (int k = 0; k < m; k++){
                if (p[j] > p[k]){
                menor = p[j];
                p[j] = p[k];
                p[k] = menor;
                }
            }
            
        }

        for (int j = 0; j < m; j++){
            if (p[j] == q[j]){
                nao_troca++;
            }
        }

        printf("%d\n", nao_troca);

    }

    return 0;
}