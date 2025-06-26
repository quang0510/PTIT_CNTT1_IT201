#include <stdio.h>
#include <string.h>

int tinhTong(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + tinhTong(n - 1);
    }
}

int main() {
    char chuoi[100];
    int n;

    printf("Nhap vao 1 chuoi bat ky: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    printf("Nhap vao so nguyen duong n: ");
    scanf("%d", &n);

    int tong = tinhTong(n);
    printf("Tong tu 1 den %d la: %d\n", n, tong);

    return 0;
}
