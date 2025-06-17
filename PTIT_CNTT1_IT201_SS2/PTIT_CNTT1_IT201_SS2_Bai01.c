
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a ;
    int *number;
    printf(" moi ban nhap so luong phan tu ( 0 < a <= 100 )");
    scanf("%d",&a);

    if ( a <= 0 || a > 100 ) {
        printf(" khong hop le ");
        return 1;
    }

    number = (int *) malloc (sizeof(int) * a);
    if ( number == NULL ) {
        printf(" khong hop le");
        return 1;
    }
    for ( int i = 0 ; i < a ; i++ ) {
        printf(" nhap phan tu number[%d]", i);
        scanf("%d",&number[i]);
    }

    int max = number[0];
    for ( int i = 0 ; i < a ; i++ ) {
        if ( number[i] > max ) {
            max = number[i];
        }
    }

    printf(" phan tu lon nhat trong mang la : %d", max);

    free(number);



    return 0;
}