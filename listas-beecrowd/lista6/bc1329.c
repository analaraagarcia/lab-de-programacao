#include <stdio.h>
#include <string.h>

int main(){
    int N, i, result, maria, joao;
    do {
        scanf("%d", &N);
        if (N == 0){
            break;
        }
        maria = 0; 
        joao = 0;
        for (i = 0; i < N; i++){
            scanf("%d", &result);
            if (result == 0){
                maria++;
            } else {
                joao++;
            }
        }
        printf("Mary won %d times and John won %d times\n", maria, joao);
    } while (N != 0);
    

    return 0;
}