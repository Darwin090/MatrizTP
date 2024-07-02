#include <stdio.h>

int main() {
    // Definir la matriz
    int matriz[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    // Imprimir los elementos pares
    printf("Elementos pares de la matriz:\n");

    // Recorrer la matriz y verificar si cada elemento es par
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] % 2 == 0) {
                printf("%d\n", matriz[i][j]);
            }
        }
    }

    return 0;
}
