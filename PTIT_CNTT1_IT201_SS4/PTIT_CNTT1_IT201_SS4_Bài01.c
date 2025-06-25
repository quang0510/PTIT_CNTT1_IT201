
#include <stdio.h>

int main(void) {

    int a ;
    printf(" moi ban nhap so lupng phan tu cua mang : ");
    scanf("%d",&a);

    int number[a];
    int value;

    for (int i = 0; i < a; i++) {
        printf("moi ban nhap gia tri cua phan tu thu %d : ", i+1);
        scanf("%d",&number[i]);
    }

    printf(" moi ban nhap gia tri can tim kiem ");
    scanf("%d",&value);

    int flag = 0;

    for(int i=0;i<a;i++) {
      if(value==number[i]) {
          printf(" vi tri cua %d trong mang la : %d ",value ,i);
          flag = 1;
          return i;
      }

    }
    if(flag==0) {
        printf("khong tim thay phan tu %d trong mang ",  value);
    }


    return 0;
}
