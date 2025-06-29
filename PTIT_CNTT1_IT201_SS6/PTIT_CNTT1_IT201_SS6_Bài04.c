
#include <stdio.h>

int haNoiTower ( int n , char start , char to , char end ) {

    if (n == 0) {
        return 0;
    }
    haNoiTower ( n - 1 , start , to , end );
    printf("dia %d di chuyen tu cot %c sang %c \n", n , start , end );

    haNoiTower(n-1 , to , start,  end );

}

int main() {

    int n;
    printf("nhap so nguyen duong bat ky\n");
    scanf("%d", &n);
    if ( n == 0) {
        printf("khong hop le");
        return 1;
    }else if ( n == 1) {
        printf(" dia %d di chuyenn tu A sang C \n",n);
        return 1;
    }

    haNoiTower(n , 'A' , 'B' , 'C' );

    return 0;
}