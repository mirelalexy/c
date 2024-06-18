/*Soluție prin Divide et Impera: Quick Sort este un algoritm de sortare eficient care funcționează pe principiul divide et impera.

Choose a Pivot: Alege un element pivot din array.
Partition: Reorganizează array-ul astfel încât toate elementele mai mici decât pivotul să fie plasate înaintea acestuia, iar toate elementele mai mari să fie plasate după acesta. Pivotul este acum în poziția sa finală.
Aplică recursiv aceleași operațiuni pe sub-array-ul de elemente mai mici și pe sub-array-ul de elemente mai mari.*/

#include <stdio.h>

// Functie pentru a schimba doua elemente
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Functie pentru partitionare
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Functie pentru sortarea rapidă
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Array-ul initial: \n");
    printArray(arr, n);
    
    quickSort(arr, 0, n - 1);
    printf("Array-ul sortat: \n");
    printArray(arr, n);
    return 0;
}

