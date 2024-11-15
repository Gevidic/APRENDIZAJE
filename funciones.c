#include "funciones.h"

// Función para calcular el mayor elemento
int obtenerMayor(int arr[], int n) {
    int mayor = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > mayor) {
            mayor = arr[i];
        }
    }
    return mayor;
}

// Función para calcular el menor elemento
int obtenerMenor(int arr[], int n) {
    int menor = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < menor) {
            menor = arr[i];
        }
    }
    return menor;
}

// Función para calcular el promedio
float obtenerPromedio(int arr[], int n) {
    float suma = 0;
    for (int i = 0; i < n; i++) {
        suma += arr[i];
    }
    return suma / n;
}

// Función para ordenar el arreglo (usando Bubble Sort)
void ordenarArreglo(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Función para calcular la mediana
float obtenerMediana(int arr[], int n) {
    ordenarArreglo(arr, n);
    if (n % 2 != 0) {
        return arr[n / 2]; // Si el tamaño es impar
    } else {
        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0; // Si el tamaño es par
    }
}

// Función para calcular la moda
int obtenerModa(int arr[], int n) {
    int maxCount = 0, moda = arr[0];
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            moda = arr[i];
        }
    }
    return (maxCount > 1) ? moda : -1; // Si no hay moda, devuelve -1
}
