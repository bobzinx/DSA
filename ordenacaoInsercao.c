#include <stdio.h>

// Função para realizar o Insertion Sort
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i]; // Elemento a ser inserido na posição correta
        int j = i - 1;

        // Move os elementos maiores que a chave para uma posição à frente
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insere a chave na posição correta
        arr[j + 1] = key;
    }
}

// Função para imprimir o array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array original:\n");
    printArray(arr, size);

    insertionSort(arr, size);

    printf("Array ordenado:\n");
    printArray(arr, size);

    return 0;
}
