#include <stdio.h>

int main(){
    int N, x[40001];
    int cont;
    int aux[40001] = {0};
    int temp;

    scanf("%d", &N);

    for (int i = 0; i < N; i++){
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (x[j] > x[j + 1]) {
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
    
    for (int i = 0; i < N; i++){
        if (aux[i] == 0){
            cont = 0;
            for (int j = 0; j < N; j++){
                if (x[i] == x[j]){
                    cont++;
                    aux[j] = 1;
                }
            }
            printf("%d aparece %d vez(es)\n", x[i], cont);   
        }
    }

    return 0;
}