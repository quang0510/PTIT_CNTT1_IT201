
#include <stdio.h>

int main() {

    int a;
    printf("Nhap vao so luong phan tu trong mang : ");
    scanf("%d",&a);

    int number[a];
    for(int i=0;i<a;i++) {
        printf(" Moi ban nhap gia tri phan tu thu %d : ",i+1);
        scanf("%d",&number[i]);
    }

    for (int i=0;i<a;i++) {
        for(int j=i+1;j<a;j++) {
            if ((number[i]) < number[j]) {
                int temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
    }

    printf("mang sau khi sap xep la : \n");
    for(int i=0;i<a;i++) {
        printf("%d ",number[i]);
    }
    printf("\n");

    int value ;
    printf("moi ban nhap gia tri muon tim kiem ");
    scanf("%d",&value);

    // tim kiem nhi phan

    int left = 0;
    int right = a-1;
    int flag = 1;


    while(left <= right) {
        int mid = ( left + right ) / 2;
        if ( number[mid] == value ) {
            printf("phan tu %d co trong mang ", value);
            flag = 0;
        }else if ( number[mid] < value ) {
            left = mid + 1;
        }else {
            right = mid - 1;
        }
    }

    if (flag ) {
        printf("phan tu %d  khong co trong mang ", value);

    }else {
        printf("phan tu %d co trong mang ", value);
    }


    return 0;
}