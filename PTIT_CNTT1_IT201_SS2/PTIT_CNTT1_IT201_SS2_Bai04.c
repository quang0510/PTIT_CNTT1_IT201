
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    int *number;
    int index;
    int value;

    printf(" Moi ban nhap so phan tu co trong mang ( 0 < a < 100 )");
    scanf("%d",&a);

    if (a <= 0 || a > 100) {
        printf("Khong hop le");
        return 1;
    }
    number = (int *)malloc(a * sizeof(int));
    if (number == NULL) {
        printf("Khong hop le");
        return 1;
    }
    for (int i = 0; i < a; i++) {
        printf("moi ban nhap phan tu thu number[%d] : ", i);
        scanf("%d",&number[i]);
    }
    printf("moi ban nhap vi tri index can sua");
    scanf("%d",&index);
    printf("moi ban nhap nhap gia tri moi");
    scanf("%d",&value);
    printf("mang truoc khi cap nhat : \n");
    for (int i = 0; i < a; i++) {
        printf("%d ",number[i]);

    }
    number[index] = value;
    printf("\n");
    printf("mang sau khi sua : \n");
    for (int i = 0; i < a; i++) {
        printf("%d ",number[i]);
    }

    free(number);
    return 0;
}