#include <stdio.h>
#include <stdlib.h>


int tinhTrungBinhChan(int *arr, int n) {
    int sum = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
            count++;
        }
    }
    if (count == 0) return 0;
    return (int)sum / count;
}

int main() {
    int n;
    int *number;

    printf("Moi ban nhap so luong phan tu trong mang (0 < n <= 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Khong hop le\n");
        return 1;
    }

    number = (int *)malloc(n * sizeof(int));
    if (number == NULL) {
        printf("Khong hop le\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Moi ban nhap gia tri phan tu thu %d: ", i + 1);
        scanf("%d", &number[i]);
    }

    int trungBinh = tinhTrungBinhChan(number, n);

    if (trungBinh == 0) {
        printf("Khong co so chan trong mang\n");
    } else {
        printf("Trung binh cong cua cac so chan trong mang la: %.d\n", trungBinh);
    }

    free(number);
    return 0;
}
