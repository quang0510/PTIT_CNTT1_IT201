
#include <stdio.h>

int timMax(int a[100][100], int rows, int cols) {
    int max = a[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (a[i][j] > max)
                max = a[i][j];
        }
    }
    return max;
}


int timMin(int a[100][100], int rows, int cols) {
    int min = a[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (a[i][j] < min)
                min = a[i][j];
        }
    }
    return min;
}

int main() {
    int rows, cols;
    int a[100][100];

    printf("Nhap so hang : ");
    scanf("%d", &rows);

    printf("Nhap so cot : ");

    scanf("%d", &cols);

    printf("Nhap cac gia tri cua phan tu:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int max = timMax(a, rows, cols);
    int min = timMin(a, rows, cols);

    printf("So lon nhat: %d\n", max);

    printf("So nho nhat: %d\n", min);

    return 0;
}
