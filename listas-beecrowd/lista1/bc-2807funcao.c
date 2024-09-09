#include <stdio.h>
#define MAX 40

void fibonacci(int N){
    int Fib[MAX];
    Fib[0] = 0;
	Fib[1] = 1;
	
	for (int i = 2; i < 61; i++){
		Fib[i] = Fib[i-1] + Fib[i-2];
	}

    for (int i = N; i > 0; i--){
        printf("%d ", Fib[i]);
    }
}


int leNumero(int N){
    scanf("%d", &N);
    return N;
}

int main(){

    int N = 1;

    leNumero(N);
    fibonacci(N);

    return 0;
}