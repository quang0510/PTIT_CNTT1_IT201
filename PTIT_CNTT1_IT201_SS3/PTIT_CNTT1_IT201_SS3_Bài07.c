#include <stdio.h>
#include <stdlib.h>

int sum(int **array,int m,int n,int k) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += array[k-1][i];
    }
    return sum;
}

int main() {
    int m,n,k;
    printf("Nhập số hàng : ");
    scanf("%d", &m);
    printf("Nhập số cột : ");
    scanf("%d",&n);
    if (m < 0 || n < 0) {
        printf("Số hàng hoặc cột không hợp lệ!");
        return 0;
    }
    int **array = (int**)malloc(n*sizeof(int*));
    for (int i = 0; i < n; i++) {
        array[i] = (int*)malloc(m*sizeof(int));
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n;j++) {
            printf("Nhập array[%d][%d] : ",i,j);
            scanf("%d", &array[i][j]);
        }
    }
    printf("Nhập hàng bạn muốn tính tổng : ");
    scanf("%d",&k);
    if (k < 0 || k > m || k > n) {
        printf("Hàng cần tính không tồn tại!");
        return 0;
    }
    printf("Sum = %d\n",sum(array,m,n,k));
    free(array);
    return 0;
}