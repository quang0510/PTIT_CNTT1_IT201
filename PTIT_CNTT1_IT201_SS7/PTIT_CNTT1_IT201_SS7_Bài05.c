
#include <stdio.h>


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}


void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);

        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    int n;
    int number[1000];
    printf("nhap so luong phan tu cua mang (0 < n <= 1000): ");
    scanf("%d", &n);

    if (n <= 0 || n > 1000) {
        printf("So luong khong hop le\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("moi ban nhap vao gia tri cua phan tu thu %d: ", i + 1);
        scanf("%d", &number[i]);
    }

    printf("\nMang khi chua sap xep la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", number[i]);
    }
    printf("\n");

    // Gọi Quick Sort
    quickSort(number, 0, n - 1);

    printf("\nMang sau khi sap xep la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", number[i]);
    }

    return 0;
}
