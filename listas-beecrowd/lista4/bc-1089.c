#include <stdio.h>

int main(){
    int N = 1, H[10000], pico = 0;

    do{
        scanf("%d", &N);

        if (N == 0){
            break;
        }
       
        for (int i = 0; i < N; i++){
            scanf("%d", &H[i]);
        }

        pico = 0;
        for (int i = 0; i < N; i++){
            if (i == 0){
                if ((H[i] > H[i+1] && H[i] > H[N-1]) || (H[i] < H[i+1] && H[i] < H[N-1])){
                    pico++;
                }
            }else if (i == N-1){
                if ((H[i] > H[0] && H[i] > H[i-1]) || (H[i] < H[0] && H[i] < H[i-1])){
                    pico++;
                }
            }else if (i != 0 && i != N-1){
                if ((H[i] > H[i+1] && H[i] > H[i-1]) || (H[i] < H[i+1] && H[i] < H[i-1])){
                    pico++;
                }
            }
        }

        printf("%d\n", pico);

    }while (N != 0);

    return 0;
}