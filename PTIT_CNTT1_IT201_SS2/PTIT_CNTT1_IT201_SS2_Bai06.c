
#include <stdio.h>
#include <stdlib.h>

int main() {

    int a;
    int *number;

    printf(" Moi ban nhap so phan tu cua mang ( 0 < a < 100 ) : ");
    scanf("%d",&a);

    if ( a <= 0 || a > 100) {
        printf(" Khong hop le");
        return 1;
    }
    number = (int *)malloc(a * sizeof(int));
    if (number == NULL) {
        printf(" Khong hop le");
        return 1;

    }
    for (int i = 0; i < a; i++) {
        printf("moi ban nhap gia tri phan tu thu %d : ", i+1);
        scanf("%d",&number[i]);
    }
    printf("mang truoc khi them la : \n");
    for (int i = 0; i < a; i++) {
        printf("%d ",number[i]);

    }
    printf("\n");


    int index;
    int value;

    printf("moi ban nhap vi tri ban muon them ( 0 <= index <= %d )", a);
    scanf("%d",&index);

    if (index < 0 || index > a) {
        printf(" Khong hop le");
        return 1;
    }

    printf("moi ban gia tri moi ");
    scanf("%d",&value);

    number = (int *)realloc(number, (a + 1) * sizeof(int));
    if (number == NULL) {
        printf(" Khong hop le");
        return 1;
    }

    for (int i = a; i > index; i--) {
        number[i] = number[i - 1];
    }

    number[index] = value;
    a++;

    printf("mang sau khi them la : \n");
    for (int i = 0; i < a; i++) {
        printf("%d ",number[i]);
    }
    free(number);


    return 0;
}