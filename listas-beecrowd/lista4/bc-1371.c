#include <stdio.h>
#include <math.h>

int main(){
    int N;
    int limite;
    
    do{
        scanf("%d", &N);

        if (N == 0){
            break;
        }

        limite = sqrt(N);
        for (int i = 1; i <= limite; i++){
            if (i == 1){
                printf("%d", i*i);
            }else{
                printf(" %d", i*i);
            }
        }
        printf("\n");
    }while (N != 0);

    return 0;
}