
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    int *number;

    printf("moi ban nhap so luong phan tu trong mang ( 0 < a <= 100 ) : ");
    scanf("%d",&a);

    if (a <= 0 || a > 100) {
        printf("khong hop le");
        return 1;
    }
    number = (int *)malloc(a * sizeof(int));

    if (number == NULL) {
        printf("khong hop le");
        return 1;
    }

    for (int i = 0; i < a; i++) {
        printf(" Moi ban nhap gia tri phan tu thu %d " ,i+1);
        scanf("%d",&number[i]);
    }
    printf("\n");
    printf("mang truoc khi xoa la :\n ");
    for (int i = 0; i < a; i++) {
        printf("%d ",number[i]);
    }
    printf("\n");

    int index;
    printf("moi ban nhap vi tri index can xoa : ");
    scanf("%d",&index);

    if (index < 0 || index >= a) {
        printf("khong hop le");
        return 1;
    }

    for (int i = index; i < a-1; i++) {
        number[i] = number[i+1];

    }
    a--;
    printf("mang sau khi xoa la :\n ");
    for (int i = 0; i < a; i++) {
        printf("%d ",number[i]);

    }
    printf("\n");
    free(number);


    return 0;
}
