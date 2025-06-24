
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *number;

    printf("moi ban nhap so luong phan tu cua mang ( 0 < n <= 100 ) : ");
    scanf("%d",&n);

    if ( n <= 0 || n > 100) {
        printf("khong hop le");
        return 1;

    }

    number = (int *)malloc(n * sizeof(int));
     if ( number == NULL) {
         printf("khong hop le");
         return 1;
     }

    for (int i = 0; i < n; i++) {
        printf("nhap gia tri phan tu thu %d  ", i + 1);
        scanf("%d",&number[i]);
    }
    printf("\n");
    printf("mang sau khi cap nhat gia tri la :  ");
    for (int i = 0; i < n; i++) {
        printf("%d ",number[i]);
    }
    free(number);

    return 0;
}