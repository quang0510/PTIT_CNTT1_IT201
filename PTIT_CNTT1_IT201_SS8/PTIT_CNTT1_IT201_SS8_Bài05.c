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

    printf("Nhap so luong phan tu cua mang (0 < n < 1000): ");
    scanf("%d", &n);


    if (n <= 0 || n >= 1000) {
        printf("So luong khong hop le. Ket thuc chuong trinh.\n");
        return 1;
    }


    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }


    insertionSort(arr, n);


    printf("Mang sau khi sap xep chen la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


    printf("Phan tich do phuc tap thoi gian:\n");
    printf("- Truong hop tot nhat (mang da sap xep): O(n)\n");
    printf("- Truong hop trung binh: O(n^2)\n");
    printf("- Truong hop xau nhat (sap xep nguoc): O(n^2)\n");

    return 0;
}
