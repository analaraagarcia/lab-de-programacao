#include <stdio.h>

int main() {
    int h, m, hora, minuto;
    while (scanf("%d %d", &h, &m) != EOF) {
        // 360 / 12 = 30
        hora = h / 30; 
        
        // 360 / 60 = 6
        minuto = m / 6; 
        if (hora < 10) {
            printf("0");
        }
        printf("%d:", hora);
        if (minuto < 10) {
            printf("0");
        }
        printf("%d\n", minuto);
    }

    return 0;
}