
#include <stdio.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {

    int n;
    printf(" moi ban nhap so luong phan tu cua mang ");
    scanf("%d", &n);

    if (n <= 0 || n > 1000) {
        printf("So luong khong hop le\n");
        return 1;
    }


    int number[1000];

    for ( int i = 0 ; i < n ; i++ ) {
        printf(" moi ban nhap gia tri phan tu thu %d ", i+1);
        scanf("%d", &number[i]);

    }

    printf("\n");
    printf("mang khi chua sap xep la :");
    for ( int i = 0 ; i < n ; i++ ) {
        printf("%d " , number[i]);
    }
    printf("\n");

    printf("mang khi da sap xep la :");

    selectionSort(number, n);

    for ( int i = 0 ; i < n ; i++ ) {
        printf("%d " , number[i]);

    }



    return 0;
}