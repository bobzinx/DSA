#include <stdio.h>

// Função para trocar dois elementos
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função para particionar o array
int partition(int arr[], int left, int high) {
    int pivot = arr[high]; 
    int i = left - 1;       

    for (int j = left; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]); 
        }
    }

    // Coloca o pivô na posição correta
    swap(&arr[i + 1], &arr[high]);
    return i + 1; 
}

// Função principal do Quicksort
void quickSort(int arr[], int left, int high) {
    if (left < high) {
        int pi = partition(arr, left, high); 
        
        quickSort(arr, left, pi - 1);  
        quickSort(arr, pi + 1, high); 
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

    quickSort(arr, 0, size - 1);

    printf("Array ordenado:\n");
    printArray(arr, size);

    return 0;
}
