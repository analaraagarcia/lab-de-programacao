#include <stdio.h>
#include <string.h>

int main() {
    int T = 0;
    char s[10];
    int verifica, i, j;
    int tam;

    scanf("%d", &T);
    
    for (i = 0; i < T; i++){
        scanf("%s", s);
        
        tam = strlen(s);
        verifica = 1;
        for (j = 0; j < tam; j++){
            if (s[j] != s[tam-j-1]){
                verifica = 0;
            }
        }
        if (verifica){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
