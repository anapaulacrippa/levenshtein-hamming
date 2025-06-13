#include <stdio.h>
#include <string.h>

// Essa implementação considera apenas strings de mesmo tamanho para comparação.
int hamming(const char *str1, const char *str2) {
    int dist = 0;
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        printf("Erro: as strings devem ter o mesmo tamanho.\n");
        return -1; // erro
    }

    for (int i = 0; i < len1; i++) {
        if (str1[i] != str2[i]) {
            dist++;
        }
    }

    return dist;
}