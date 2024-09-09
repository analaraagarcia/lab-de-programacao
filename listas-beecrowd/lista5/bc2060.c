#include <stdio.h>
#include <math.h>

int main(){

    int N, L, i, multiplo_2, multiplo_3, multiplo_4, multiplo_5;

    scanf("%d", &N);

    multiplo_2 = 0;
    multiplo_3 = 0;
    multiplo_4 = 0;
    multiplo_5 = 0;

    for (i = 0; i < N; i++){
        scanf("%d", &L);
        if (L % 2 == 0){
            multiplo_2++;
        }
        if (L % 3 == 0){
            multiplo_3++;
        }
        if (L % 4 == 0){
            multiplo_4++;
        }
        if (L % 5 == 0){
            multiplo_5++;
        }
    }

    printf("%d Multiplo(s) de 2\n", multiplo_2);
    printf("%d Multiplo(s) de 3\n", multiplo_3);
    printf("%d Multiplo(s) de 4\n", multiplo_4);
    printf("%d Multiplo(s) de 5\n", multiplo_5);

    return 0;
}