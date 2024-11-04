#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char enigma[100];
    int R, L, J;
    char r_str[20], l_str[20], j_str[20];

    while (fgets(enigma, sizeof(enigma), stdin) != NULL) {
        enigma[strcspn(enigma, "\n")] = '\0';
        sscanf(enigma, "%[^+]+%[^=]=%s", r_str, l_str, j_str);
        R = L = J = -1;

        if (strspn(r_str, "0123456789") == strlen(r_str)) {
            R = atoi(r_str);
        }
        if (strspn(l_str, "0123456789") == strlen(l_str)) {
            L = atoi(l_str);
        }
        if (strspn(j_str, "0123456789") == strlen(j_str)) {
            J = atoi(j_str);
        }

        if (R == -1) {
            R = J - L;
            printf("%d\n", R);
        } else if (L == -1) {
            L = J - R;
            printf("%d\n", L);
        } else if (J == -1) {
            J = R + L;
            printf("%d\n", J);
        }
    }

    return 0;
}
