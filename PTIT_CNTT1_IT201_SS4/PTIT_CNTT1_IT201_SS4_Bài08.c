
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d",&n);
    if (n <= 0 || n > 1000) {
        printf("khong hop le");
        return 0;
    }
    int *array = (int*)malloc(n * sizeof(int));

    printf("Nhap cac phan tu cua mang: \n");
    for (int i = 0; i < n; i++) {
        printf("array[%d] = ",i);
        scanf("%d",&array[i]);
    }
    int flag = 0,value;
    printf("Nhap gia tri can tim kiem : ");

    scanf("%d",&value);

    for (int i = 0; i < n; i++) {
        if (array[i] == value) {
            printf("%d\t",i);
            flag = 1;
        }
    }
    if (flag == 0) {
        printf("Phan tu khong co trong mang\n");
    }
    return 0;
}