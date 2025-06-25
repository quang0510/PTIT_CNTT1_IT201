
#include <stdio.h>

int main () {

    int a;
    printf(" Moi ban nhap so luong phan tu cua mang : ");
    scanf("%d",&a);

    int number[a];

    for(int i=0;i<a;i++) {
        printf("Moi ban nhap gia tri phan tu thu %d : ", i+1);
        scanf("%d",&number[i]);
    }

    int max = number[0];
    int index = 0;

    for(int i=0;i<a;i++) {
        if (number[i] > max) {
            max = number[i];
            index = i;
        }
    }

    printf(" gia tri lon nhat trong mang %d voi vi tri %d ", max , index);

    return 0;

}