#include <stdio.h>
#include <math.h>

int main(){

    int T, consoantes, digitos, i;
    float placa;
    scanf("%d", &T);

    for (i = 0; i < T; i++){
        scanf("%d %d", &consoantes, &digitos);
        if (consoantes == 0 && digitos == 0){
            placa = 0;
        }else{
            placa = pow(26, consoantes) * pow(10, digitos);
        }
        printf("%.0f\n", placa);
    }

    return 0;
}