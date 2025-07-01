#include <stdio.h>


int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x)
            return i;
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


    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);


    int value = linearSearch(arr, n, x);


    if (value != -1)
        printf("Tim thay %d tai vi tri index %d (phan tu thu %d trong mang).\n", x, value, value + 1);
    else
        printf("Khong tim thay %d trong mang.\n", x);


    printf("Do phuc tap thoi gian cua tim kiem tuyen tinh: O(n)\n");

    return 0;
}
