#include <stdio.h>

int main(){

    long long int Fib[41];
    int i, N;

    scanf("%d", &N);

    Fib[0] = 0;
    Fib[1] = 1;

    for (i = 2; i <= N; i++){
        Fib[i] = Fib[i-1] + Fib[i-2];
    }

    for (i = N; i >= 1; i--) {
        printf("%lld", Fib[i]);
        if (i > 1) {
            printf(" ");
        }
    }

    printf("\n");


    return 0;
}