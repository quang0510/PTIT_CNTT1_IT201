#include <stdio.h>

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {

        if (arr[j] < pivot) {
            i++;

            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }


    int temp = arr[i + 1];

    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}


void quickSort(int arr[], int low, int high)

    if (low < high) {

        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
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

    quickSort(arr, 0, n - 1);


    printf("Mang sau khi sap xep (Quick Sort):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


    printf("Phan tich do phuc tap thoi gian:\n");
    printf("- Truong hop trung binh: O(n log n)\n");
    printf("- Truong hop xau nhat (mang da sap xep): O(n^2)\n");
    printf("- Truong hop tot nhat: O(n log n)\n");

    return 0;
}
