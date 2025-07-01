
#include <stdio.h>


void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int flag = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        if ( flag == 0) {
            return;
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


    bubbleSort(arr, n);


    printf("\nMang sau khi sap xep (tang dan): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nPhan tich do phuc tap thoi gian:\n");
    printf(" - Truong hop xau nhat: O(n^2)\n");
    printf(" - Truong hop tot nhat (da sap xep): O(n)\n");
    printf(" - Trung binh: O(n^2)\n");
    return 0;
}

