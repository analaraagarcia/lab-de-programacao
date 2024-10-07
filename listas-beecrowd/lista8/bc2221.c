#include <stdio.h>

int main(){
    int T, B, A1, D1, L1, i, A2, D2, L2, valor1 = 0, valor2 = 0;
    scanf("%d", &T);

    for (i = 0; i < T; i++){
        scanf("%d", &B);
        scanf("%d %d %d", &A1, &D1, &L1);
        scanf("%d %d %d", &A2, &D2, &L2);

        valor1 = (A1 + D1) / 2;
        if (L1 % 2 == 0){
            valor1 += B;
        }

        valor2 = (A2 + D2) / 2;
        if (L2 % 2 == 0){
            valor2 += B;
        }

        if (valor1 > valor2){
            printf("Dabriel\n");
        } else if (valor1 < valor2){
            printf("Guarte\n");
        } else {
            printf("Empate\n");
        }
    }


    return 0;
}