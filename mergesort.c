#include <stdio.h>

void merge(int arr[], int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;

        // Recursão para dividir o array
        merge(arr, left, middle);
        merge(arr, middle + 1, right);

     
        int n1 = middle - left + 1;
        int n2 = right - middle;

        // Arrays temporários
        int leftArr[n1], rightArr[n2];

        // Copiar dados para os arrays temporários
        for (int i = 0; i < n1; i++) {
            leftArr[i] = arr[left + i];
        }
        for (int j = 0; j < n2; j++) {
            rightArr[j] = arr[middle + 1 + j];
        }

        // Mesclar os arrays temporários de volta no array original
        int i = 0, j = 0, k = left;
        while (i < n1 && j < n2) {
            if (leftArr[i] <= rightArr[j]) {
                arr[k] = leftArr[i];
                i++;
            } else {
                arr[k] = rightArr[j];
                j++;
            }
            k++;
        }

        // Copiar os elementos restantes de leftArr, se houver
        while (i < n1) {
            arr[k] = leftArr[i];
            i++;
            k++;
        }

        // Copiar os elementos restantes de rightArr, se houver
        while (j < n2) {
            arr[k] = rightArr[j];
            j++;
            k++;
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
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array original: \n");
    printArray(arr, size);

    merge(arr, 0, size - 1);

    printf("Array ordenado: \n");
    printArray(arr, size);

    return 0;
}