#include <stdio.h>
#include <string.h>

int main(){

    int t, keys = 0, achou = 0, cont, tam;
    char v[8][5] = {"abc ", "def ", "ghi ", "jkl ", "mno ", "pqrs", "tuv ", "wxyz"};
    char test[100], lixo;

    scanf("%d%c", &t, &lixo);

    for (int i = 0; i < t; i++){
        cont = 0;
        achou = 0;
        keys = 0;
        gets(test);
        tam = strlen(test);
        while (cont < tam) {
            achou = 0;
            for (int j = 0; j < 8 && !achou; j++){
                for (int k = 0; k < 5 && !achou; k++){
                    if (test[cont] == ' '){
                        achou = 1;
                        keys++;
                    } else if (test[cont] == v[j][k]){
                        achou = 1;
                        keys += k + 1;
                    } 
                }   
            }
            cont++;
        }
        printf("Case #%d: %d\n", i+1, keys);
    }

    return 0;
}