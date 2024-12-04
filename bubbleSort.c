#include <stdio.h>

// Função para realizar o Bubble Sort
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        // Flag para verificar se houve trocas na iteração
        int swapped = 0;

        // Comparando elementos adjacentes
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos se estiverem fora de ordem
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; // Marca que houve troca
            }
        }

        // Se nenhuma troca foi realizada, a lista já está ordenada
        if (swapped == 0) {
            break;
        }
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

    bubbleSort(arr, size);

    printf("Array ordenado:\n");
    printArray(arr, size);

    return 0;
}
