
#include <stdio.h>

int giaiThua(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * giaiThua(n - 1);
    }
}

int main() {
    int n;

    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap so nguyen duong!\n");
        return 1;
    }

    int value = giaiThua(n);

    printf("Giai thua cua %d la: %d\n", n, value);

    return 0;
}
