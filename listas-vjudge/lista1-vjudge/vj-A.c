#include <stdio.h>

int main (){

    int n;

    do {
        scanf("%d", &n);
        if (n != 42){
            printf("%d\n", n);
        }

    } while (n != 42);

    return 0;
}