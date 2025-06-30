#include <stdio.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;


        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main() {
    int n;
    int number[1000];
    printf("nhap so luong phan tu cua mang ( 0 < n <= 1000 ) \n");
    scanf("%d", &n);

    if (n <= 0 || n > 1000) {
        printf("So luong khong hop le\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("moi ban nhap vao gia tri cua phan tu thu %d: ", i + 1);
        scanf("%d", &number[i]);
    }
    printf("\n");

    printf("mang khi chua sap xep la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", number[i]);
    }

    printf("\n");

    insertionSort(number, n);

    printf("\nMang sau khi sap xep la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", number[i]);
    }

    return 0;
}
