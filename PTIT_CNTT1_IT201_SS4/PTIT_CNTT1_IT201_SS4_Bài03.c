
#include <stdio.h>

int main() {

    int a;
    printf("moi ban nhap so luong pahn tu cua mang : ");
    scanf("%d",&a);

    int number[a];
    for(int i=0;i<a;i++) {
        printf("moi ban nhap gia tri phan tu thu %d ", i+1);
        scanf("%d",&number[i]);
    }

    int min = number[0];
    int index = 0;
    for(int i=0;i<a;i++) {
        if(number[i] < min) {
            min = number[i];
            index = i;

        }
    }

    printf("gia tri nho nhat trong magn la %d o vi tri thu %d ", min , index);

    return 0;
}