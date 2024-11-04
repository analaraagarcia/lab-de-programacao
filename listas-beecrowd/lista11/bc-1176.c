#include <stdio.h>
 
int main() {
    long long int Fib[61];
	int i, j, N;
	
	Fib[0] = 0;
	Fib[1] = 1;
	
	for (i = 2; i < 61; i++) {
		Fib[i] = Fib[i-1] + Fib[i-2];
	}
	scanf("%d", &j);
	
	for (i = 1; i <= j; i++) {
		scanf("%d", &N);
		printf("Fib(%d) = %lld\n", N, Fib[N]);
	}
 
    return 0;
}