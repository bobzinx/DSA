#include <stdio.h>

// Função para realizar a busca binária
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {

        // Evita estouro de overflow em grandes índices
        int mid = left + (right - left) / 2; 

        // Verifica se o elemento alvo está no meio
        if (arr[mid] == target) {
            return mid; // Retorna o índice do elemento encontrado
        }

        // Se o elemento alvo for maior, ele está na metade direita
        if (arr[mid] < target) {
            left = mid + 1;
        }
        // Se o elemento alvo for menor, ele está na metade esquerda
        else {
            right = mid - 1;
        }
    }

    return -1; // Retorna -1 se o elemento não for encontrado
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14}; // Array ordenado
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    // Realiza a busca binária
    int result = binarySearch(arr, size, target);

    // Exibe o resultado
    if (result != -1) {
        printf("Elemento encontrado no índice %d.\n", result);
    } else {
        printf("Elemento não encontrado.\n");
    }

    return 0;
}
