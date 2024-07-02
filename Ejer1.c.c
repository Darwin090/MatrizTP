#include <stdio.h>

int main() {
    // Definir la matriz
    int matriz[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    // Imprimir los elementos de las esquinas
    printf("Elementos de las esquinas:\n");
    printf("%d\n", matriz[0][0]); // Esquina superior izquierda
    printf("%d\n", matriz[0][2]); // Esquina superior derecha
    printf("%d\n", matriz[2][0]); // Esquina inferior izquierda
    printf("%d\n", matriz[2][2]); // Esquina inferior derecha

    return 0;
}