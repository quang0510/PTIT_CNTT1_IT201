#include <stdio.h>

int tinhTongMang(int a[], int n) {
    if (n == 0) {
        return 0;
    } else {
        return a[n - 1] + tinhTongMang(a, n - 1);
    }
}

int main() {
    int a[100], n;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Phan tu a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    int tong = tinhTongMang(a, n);
    printf("Tong cac phan tu trong mang la: %d\n", tong);

    return 0;
}
