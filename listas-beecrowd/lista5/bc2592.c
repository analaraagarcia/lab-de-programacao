#include <stdio.h>

int main(){
    int N, numeros, i, tentativas = 0, em_ordem = 0;

    do {
        scanf("%d", &N);

        if (N == 0){
            break;
        }

        tentativas = 0;
        do {
            em_ordem = 1;
            for (i = 0; i < N;  i++){
                scanf("%d", &numeros);
                if (numeros != i + 1){
                    em_ordem = 0;
                }
            }
            tentativas++;
        } while (!em_ordem);

        printf("%d\n", tentativas);
        


    } while (N != 0);


    return 0;
}