
#include <stdio.h>
#include <stdlib.h>

int main() {

    int a;
    int *number;

    printf(" moi ban nhap so luong phan tu cua mang ( 0 < a <= 100 )");
    scanf("%d",&a);

    if ( a <= 0 || a > 100 ) {
        printf(" khong hop le");
        return 1;
    }
    number = ( int *) malloc(sizeof (int) * a);
    if ( number == NULL ) {
        printf(" khong hop le");
        return 1;
    }
    for (int i = 0; i < a; i++) {
        printf("moi ban nhap phan tu number[%d]", i);
        scanf("%d",&number[i]);
    }

    printf(" mang truoc khi dao nguoc la : ");
    for (int i = 0; i < a; i++) {
        printf(" %d", number[i]);
    }

    printf("\n");

    for (int i = 0; i < a/2; i++) {
        int temp = number[i];
        number[i] = number[a-1-i];
        number[a-1-i] = temp;
    }
    printf("mang sau khi dao nguoc la : ");
    for (int i = 0; i < a; i++) {
        printf(" %d", number[i]);
    }

    free(number);

    return 0;
}

