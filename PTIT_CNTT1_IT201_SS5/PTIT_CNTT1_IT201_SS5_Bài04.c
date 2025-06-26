
#include <stdio.h>


int tinhTong(int first, int second) {
    if (first > second) {
        return 0;
    } else {
        return first + tinhTong(first + 1, second);
    }
}

int main() {
    int firstNum, secondNum;

    printf("Nhap so thu nhat (firstNum): ");
    scanf("%d", &firstNum);

    printf("Nhap so thu hai (secondNum): ");
    scanf("%d", &secondNum);

    if (firstNum <= 0 || secondNum <= 0) {
        printf("Vui long nhap hai so nguyen duong\n");
        return 1;
    }

    if (firstNum > secondNum) {
        int temp = firstNum;
        firstNum = secondNum;
        secondNum = temp;
    }

    int tong = tinhTong(firstNum, secondNum);
    printf("Tong tu %d den %d la: %d\n", firstNum, secondNum, tong);

    return 0;
}
