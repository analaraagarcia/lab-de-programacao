#include <stdio.h>
#include <string.h>

int main() {
    char D[102], S[102];

    while (gets(D) && gets(S)) {
        if (strstr(D, S)) {
            printf("Resistente\n");
        } else {
            printf("Nao resistente\n");
        }
    }

    return 0;
}