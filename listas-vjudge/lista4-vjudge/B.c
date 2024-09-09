#include <stdio.h>

int binario_reverso(int num) {
    int reverso = 0;
    while (num > 0) {
        reverso = reverso * 2 + (num % 2);
        num /= 2;
    }
    return reverso;
}

int main() {
    int N, i;
    scanf("%d", &N);
    int numbers[N];

    for (i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < N; i++) {
        if (numbers[i] % 2 == 0) {
            numbers[i] = binario_reverso(numbers[i]);
        }
        printf("%d\n", numbers[i]);
    }

    return 0;
}
