#include <stdio.h>

int main(){
    float abcissa, ordenada;

    scanf("%f %f", &abcissa, &ordenada);

    if (abcissa > 0 && ordenada > 0){
        printf("Q1\n");
    }else if (abcissa < 0 && ordenada > 0){
        printf("Q2\n");
    }else if (abcissa < 0 && ordenada < 0){
        printf("Q3\n");
    }else if (abcissa > 0 && ordenada < 0){
        printf("Q4\n");
    }else if (abcissa == 0 && ordenada == 0){
        printf("Origem\n");
    }else if (abcissa == 0 && ordenada != 0){
        printf("Eixo Y\n");
    }else if (abcissa != 0 && ordenada == 0){
        printf("Eixo X\n");
    }

    return 0;
}