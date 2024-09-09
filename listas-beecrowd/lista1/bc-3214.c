#include <stdio.h>

int contaRefri(int E, int F, int C){

    int totalRefri = 0;
    int novosRefris;
    int totalGarrafas = E + F;
    
    while (totalGarrafas >= C){

        novosRefris = totalGarrafas / C;
        totalRefri += novosRefris;
        totalGarrafas = novosRefris + (totalGarrafas % C);
        
    }

    return totalRefri;

}

int leEntrada(int *E, int *F, int *C){

    scanf("%d %d %d", E, F, C);

    return 1;

}

int main(){

    int E, F, C;

    leEntrada(&E, &F, &C);
    int resultado = contaRefri(E, F, C);

    printf("%d\n", resultado);

    return 0;
}