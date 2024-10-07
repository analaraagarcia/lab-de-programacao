#include <stdio.h>

int main(){
    int N, M, x[1000], i, prejuizo = 0;

    while (scanf("%d %d", &N, &M) != EOF){
        prejuizo = 0;
        for (i = 0; i < N; i++){
            scanf("%d", &x[i]);
        }

        for (i = N - 1; i >= N - M; i--){
            prejuizo += x[i];
        }

        printf("%d\n", prejuizo);

    }

    return 0;
}