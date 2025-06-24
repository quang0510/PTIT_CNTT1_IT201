
#include <stdio.h>

int tongCheoChinh(int number[100][100], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += number[i][i];
    }
    return sum;
}


int tongCheoPhu(int number[100][100], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += number[i][n - 1 - i];
    }
    return sum;
}

int main() {
    int rows, cols;
    int number[100][100];

    printf("Nhap so hang (0 < rows < 1000) : ");
    scanf("%d", &rows);

    printf("Nhap so cot (0 < cols < 1000) : ");
    scanf("%d", &cols);


    if (rows <= 0 || rows >= 1000 || cols <= 0 || cols >= 1000) {
        printf("So hang hoac cot khong hop le\n");
        return 1;
    }

    if (rows != cols) {
        printf("Chi tinh duoc duong cheo khi ma tran la vuong (rows = cols)\n");
        return 1;
    }

    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("number[%d][%d] = ", i, j);
            scanf("%d", &number[i][j]);
        }
    }

    int sumChinh = tongCheoChinh(number, rows);
    int sumPhu = tongCheoPhu(number, rows);

    printf("Tong duong cheo chinh: %d\n", sumChinh);

    printf("Tong duong cheo phu: %d\n", sumPhu);

    return 0;
}
