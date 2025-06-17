
#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    int *number;
    int value;

    printf(" Moi ban nhap so luong phan tu cua mang : ");
    scanf("%d", &n);

    if ( n <= 0 ) {
        printf("Khong hop le");

        return 1;
    }
    number = (int*)malloc(n * sizeof(int));
    if ( number == NULL ) {
        printf("Khong hop le");
        return 1;

    }
    for ( int i = 0; i < n; i++ ) {
        printf("Moi ban nhap gia tri phan tu thu %d : ", i + 1);
        scanf("%d", &number[i]);
    }

    printf("\n");
    printf(" Moi ban nhap gia tri so bat ki : ");
    scanf("%d", &value);
    int flag = 0;
    for ( int i = 0; i < n; i++ ) {
        for ( int j = 0; j < n-1; j++ ) {
            if ( number[i] + number[j] == value ) {
                printf("%d , %d  co tong bang %d \n",number[i], number[j] , value);
                flag ++;
            }
        }
    }
    if (flag == 0) {
        printf("trong mang khong co tong 2 so bat ki bang %d " , value);
        return 1;
    }
free(number);
    return 0;
}