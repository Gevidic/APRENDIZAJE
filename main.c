#include <stdio.h>
#include "funciones.h"

int main() {
    int n = 10;
    int arreglos[10];

    // Solicitar al usuario que ingrese los números
    printf("Ingrese 10 números:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arreglos[i]);
    }

    // Llamadas a funciones y mostrar resultados
    printf("\nMayor: %d", obtenerMayor(arreglos, n));
    printf("\nMenor: %d", obtenerMenor(arreglos, n));
    printf("\nPromedio: %.2f", obtenerPromedio(arreglos, n));
    printf("\nMediana: %.2f", obtenerMediana(arreglos, n));

    int moda = obtenerModa(arreglos, n);
    if (moda != -1) {
        printf("\nModa: %d", moda);
    } else {
        printf("\nNo hay moda");
    }

    return 0;
}