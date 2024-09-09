#include <stdio.h>

int main(){

    int n, x, d, joao, maria;

    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        joao = 0;
        for (int j = 0; j < 3; j++){
            scanf("%d %d", &x, &d);
            joao += x * d;
        }

        maria = 0;
        for (int j = 0; j < 3; j++){
            scanf("%d %d", &x, &d);
            maria += x * d;
        }

        if (joao > maria){
            printf("JOAO\n");
        }else {
            printf("MARIA\n");
        }
    }


    return 0;
}