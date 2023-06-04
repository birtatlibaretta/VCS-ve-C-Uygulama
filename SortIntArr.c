#include <stdio.h>

void SortIntArr(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[100];
    int size;
    printf("Dizinin boyutunu girin: ");
    scanf("%d", &size);
    printf("Dizinin elemanlarını girin:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    SortIntArr(arr, size);
    printf("Sıralanmış dizi: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
