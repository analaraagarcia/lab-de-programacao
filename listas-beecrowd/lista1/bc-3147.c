#include <stdio.h>

int exercitos(int H, int E, int A, int O, int W, int X){
    int bem, mal;
    bem = H + E + A + X;
    mal = O + W;

    if (bem >= mal){
        return 1;
    }else {
        return 0;
    }
}

void leNumeros(int *H, int *E, int *A, int *O, int *W, int *X){
    scanf("%d %d %d %d %d %d", H, E, A, O, W, X);
}


int main(){

    int H, E, A, O, W, X;

    leNumeros(&H, &E, &A, &O, &W, &X);
    int resultado = exercitos(H, E, A, O, W, X);

    if (resultado){
        printf("Middle-earth is safe.\n");
    }else {
        printf("Sauron has returned.\n");
    }

    return 0;
}