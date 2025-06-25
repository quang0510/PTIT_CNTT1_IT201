
#include <stdio.h>

int main() {

    int a;
    printf(" Moi ban nhap so luong phan tu cua mang ");
    scanf("%d",&a);

    int number[a];
    for(int i=0;i<a;i++) {
        printf("moi ban nhap gia tri cua phan tu thu %d ", i+1);
        scanf("%d",&number[i]);

    }

    int value;
    printf("moi ban nhap 1 gia tri bat ki ");
    scanf("%d",&value);

    int index = 1;

    for(int i=0;i<a;i++) {
        if(number[i] == value) {
            index = i;
        }
    }

    if ( index != 1 ) {
        printf("gia tri %d xuat hien o vi tri cuoi cung la %d ", value , index);
    }else if ( index == 0) {
        printf("khong tim thay phan tu %d trong mang ", value );
    }


    return 0;
}