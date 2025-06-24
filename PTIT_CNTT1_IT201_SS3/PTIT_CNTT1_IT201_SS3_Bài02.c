
#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    int *number;

    printf("Moi ban nhap so luong phan tu cua mang ( 0 < n <= 100 ) : ");
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
    for ( int i = 0; i < n; i++) {
        printf("moi ban nhap gia tri phan tu thu %d" , i + 1);
        scanf("%d",&number[i]);
    }

    int maxNumber = number[0];
    for ( int i = 1; i < n; i++) {
        if ( number[i] > maxNumber) {
            maxNumber = number[i];
        }
    }

    printf(" gia tri lon nhat trong mang la %d ", maxNumber);

    free(number);


    return 0;
}