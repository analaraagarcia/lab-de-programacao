#include <stdio.h>

int main() {
    int N, X, Y;
    float resultado;
    scanf("%d %d %d", &N, &X, &Y);
    resultado = (float)N / (X + Y);
    printf("%.2f\n", resultado);

    return 0;
}