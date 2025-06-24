
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Nhập số phần tử : ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Số phần tử không hợp lệ!");
        return 0;
    }
    int *array = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        printf("Nhập array[%d] : ",i);
        scanf("%d", &array[i]);
    }
    int m;
    printf("Nhập số phần tử muốn thêm : ");
    scanf("%d", &m);
    array = (int*)realloc(array, sizeof(int) * (n+m));
    for (int i = n; i < (n+m); i++) {
        printf("array[%d] : ",i);
        scanf("%d", &array[i]);
    }
    printf("Các phần tử trong mảng : \n");
    for (int i = 0; i < (n+m); ++i) {
        printf("array[%d] : %d\n",i,array[i]);
    }
    free(array);
    return 0;
}