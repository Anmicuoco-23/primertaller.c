#include <stdio.h>

#define N 10

// Función para llenar el arreglo con enteros positivos
void llenarArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        int num;
        do {
            printf("Ingrese un número positivo [%d/%d]: ", i + 1, n);
            scanf("%d", &num);
            if (num <= 0) {
                printf(" Error: el número debe ser positivo.\n");
            }
        } while (num <= 0);
        a[i] = num;
    }
}

// Función para imprimir un arreglo
void imprimirArray(int a[], int n) {
    printf("[ ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("]\n");
}

// Selection Sort Ascendente
void ordenarSelectionAscendente(int a[], int n) {
    int paso = 1;
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIdx]) {
                minIdx = j;
            }
        }
        if (minIdx != i) {
            int temp = a[i];
            a[i] = a[minIdx];
            a[minIdx] = temp;
            printf("Paso %d: ", paso++);
            imprimirArray(a, n);
        }
    }
}

// Insertion Sort Descendente
void ordenarInsertionDescendente(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] < key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
        printf("Inserción %d: ", i);
        imprimirArray(a, n);
    }
}

int main() {
    int arreglo[N];
    int opcion;
    int registrado = 0; // bandera para verificar si se ingresaron datos
    int copia[N];

    do {
        printf("\n===== MENÚ =====\n");
        printf("1. Registrar números\n");
        printf("2. Mostrar arreglo original\n");
        printf("3. Ordenar (Selection Sort ASC)\n");
        printf("4. Ordenar (Insertion Sort DESC)\n");
        printf("5. Salir\n");
        printf("Elige una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                llenarArray(arreglo, N);
                registrado = 1;
                printf("Datos registrados.\n");
                break;
            case 2:
                if (!registrado) { printf(" Primero registra datos.\n"); break; }
                printf("Arreglo original: ");
                imprimirArray(arreglo, N);
                break;
            case 3:
                if (!registrado) { printf("Primero registra datos.\n"); break; }
                for (int i = 0; i < N; i++) copia[i] = arreglo[i];
                printf("Proceso Selection Sort (ascendente):\n");
                ordenarSelectionAscendente(copia, N);
                printf("Resultado final: ");
                imprimirArray(copia, N);
                break;
            case 4:
                if (!registrado) { printf(" Primero registra datos.\n"); break; }
                for (int i = 0; i < N; i++) copia[i] = arreglo[i];
                printf("Proceso Insertion Sort (descendente):\n");
                ordenarInsertionDescendente(copia, N);
                printf("Resultado final: ");
                imprimirArray(copia, N);
                break;
            case 5:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción inválida.\n");
        }
    } while (opcion != 5);

    return 0;
}
