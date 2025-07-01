
#include <stdio.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }

        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    int n;
    int arr[1000];

    printf("Nhap so luong phan tu cua mang (0 < n < 1000): ");
    scanf("%d", &n);

    if (n <= 0 || n >= 1000) {
        printf("So luong khong hop le.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }


    printf("\nMang truoc khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


    selectionSort(arr, n);

    printf("\nMang sau khi sap xep (tang dan): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


    printf("Phan tich do phuc tap thoi gian:\n");
    printf(" - Truong hop tot nhat: O(n^2)\n");
    printf(" - Truong hop xau nhat: O(n^2)\n");
    printf(" - Trung binh: O(n^2)\n");

    return 0;
}
