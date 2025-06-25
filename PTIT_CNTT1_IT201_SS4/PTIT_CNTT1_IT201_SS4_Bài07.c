
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Nhap so luong pahn tu : ");
    scanf("%d",&n);
    if (n <= 0 || n > 1000) {
        printf("khong hop le");
        return 0;
    }
    int *array = (int*)malloc(n * sizeof(int));
    printf(" nhap cac phan tu cua mang : \n");
    for (int i = 0; i < n; i++) {
        printf("array[%d] = ",i);
        scanf("%d",&array[i]);
    }
    int i = 0,j = n - 1,flag = 0;
    while (i < j) {
        if (array[i] == array[j]) {
            printf("cap doi xung : (%d,%d)\n",array[i],array[j]);
            flag = 1;
        }
        i++;
        j--;
    }
    if (flag == 0) {
        printf("Khong co phan tu doi xung");
    }
    return 0;
}