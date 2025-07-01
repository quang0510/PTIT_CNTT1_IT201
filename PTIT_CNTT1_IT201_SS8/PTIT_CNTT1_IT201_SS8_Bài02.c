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

int binarySearch(int arr[], int n, int x) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == x) {

            return mid;
        }
        else if (arr[mid] < x) {

            left = mid + 1;
        }
        else {

            right = mid - 1;
        }
    }

    return -1;
}

int main() {

    int n, x;

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


    bubbleSort(arr, n);


    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);


    int value = binarySearch(arr, n, x);


    if (value != -1)
        printf("Tim thay %d tai vi tri index %d (phan tu thu %d trong mang).\n", x, value, value + 1);
    else
        printf("Khong tim thay %d trong mang.\n", x);


    printf("Do phuc tap thoi gian:\n");
    printf(" - Bubble Sort: O(n^2)\n");
    printf(" - Tim kiem nhi phan: O(log n)\n");

    return 0;
}
