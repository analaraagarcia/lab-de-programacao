#include <stdio.h>
 
int main() {
    int N, i, j = 0, k = 1, soma;
	
	scanf("%d", &N);
	
	for (i = 1; i <= N; i++) {
		if (i < N) {
			printf("%d ", j);
		} else {
			printf("%d\n", j);
		}
		soma = j + k;
		j = k;
		k = soma;
	}
 
    return 0;
}