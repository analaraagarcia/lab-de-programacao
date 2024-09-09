#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(){

    int t, r, g, b, P;
    char x[5];

    scanf("%d", &t);

    for (int i = 0; i < t; i++){
        scanf("%s", &x);
        fflush(stdin);
        scanf("%d %d %d", &r, &g, &b);
        
        if (strcmp(x, "eye") == 0){
            P = floor(0.3*r + 0.59*g + 0.11*b);

        } else if (strcmp(x, "min") == 0){
            if (r <= g && r <= b){
                P = r;
            } else if (g <= r && g <= b){
                P = g;
            } else {
                P = b;
            }

        } else if (strcmp(x, "max") == 0){
            if (r >= g && r >= b){
                P = r;
            } else if (g >= r && g >= b){
                P = g;
            } else {
                P = b;
            }
        } else if (strcmp(x, "mean") == 0){
            P = floor((r + g + b) / 3);
        }

        printf("Caso #%d: %d\n", i+1, P);

    }

    return 0;
}