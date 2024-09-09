#include <stdio.h>

int main(){

    int n, t, d, dia = 1;
    float velo[100];
    
    velo[0] = 0;

    while (scanf("%d", &n) != EOF){
        for (int i = 1; i <= n; i++){
            scanf("%d %d", &t, &d);
            velo[i] = d/(float)t;
            
            if (velo[i] > velo[i-1]){
                dia = i;
                printf("%d\n", dia);
            } else {
                velo[i] = velo[i-1];
            }
        }

    }

    return 0;
}