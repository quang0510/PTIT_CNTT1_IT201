
#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    int *number;

    printf("Moi ban nhap so luong phan tu co trong mang : ");
    scanf("%d",&n);

    if (n <= 0 ) {
        printf("khong hop le");
        return 1;
    }
    number = (int *)malloc(n * sizeof(int));
    if ( number == NULL ) {
        printf("khong hop le");
        return 1;
    }

    for ( int i = 0; i < n; i++ ) {
        printf("Moi ban nhap gia tri phan tu thu %d ", i+1);
        scanf("%d",&number[i]);
    }

    printf("\n");
    printf("Mang ta co la : \n");

    for ( int i = 0; i < n; i++ ) {
        printf(" %d ",number[i]);

    }

    printf("\n");
    printf("cac phan tu lon hon phan tu dung sau la : \n");
    for ( int i = 0; i < n; i++ ) {
        int count = 1;
        for ( int j = i+1; j < n; j++ ) {
            if (number[i] <= number[j]) {
                count = 0;
                break;
            }
        }
        if ( count == 1 ) {
            printf("%d ",number[i]);
        }
    }
    printf("\n");
    free(number);

    return 0;
}