#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int x1, x2, y1, y2, movimentos;

    do {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        if (x1 == 0 && x2 == 0 && y1 == 0 && y2 == 0){
            break;
        }

        if (x1 == x2 && y1 == y2){
            movimentos = 0;
        } else {
            if (abs(x1 - x2) == abs (y1 - y2) || x1 == x2 || y1 == y2){
                movimentos = 1;
            } else {
                movimentos = 2;
            }
        }

        printf("%d\n", movimentos);
    } while (x1 != 0 && x2 != 0 && y1 != 0 && y2 != 0);

    return 0;
}