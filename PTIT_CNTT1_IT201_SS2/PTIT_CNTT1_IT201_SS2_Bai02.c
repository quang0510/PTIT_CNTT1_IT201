
#include <stdio.h>
#include <stdlib.h>

int main() {

    int a;
    int *number;

    printf(" moi ban nhap sp phan tu ( 0 < a <= 100 )");
    scanf("%d",&a);

    if ( a <= 0 || a > 100 ) {
        printf(" khong hop le");
        return 1;
    }

    number = (int *) malloc (sizeof(int) * a);
    if ( number == NULL ) {
        printf(" khong hop le");
        return 1;

    }
    for ( int i = 0; i < a; i++ ) {
        printf(" moi ban nhap phan tu number[%d]", i );
        scanf("%d",&number[i]);
    }

    int flag = 0;
    int choiceNumber;
    printf(" moi ban nhap so can tim trong mang ");
    scanf("%d",&choiceNumber);
    for ( int i = 0; i < a; i++ ) {
        if ( number[i] == choiceNumber ) {
            flag ++;
        }
    }
    if ( flag == 0 ) {
        printf(" khong co phan tu %d trong mang" , choiceNumber);
    }else {
        printf(" %d xuat hien trong mang %d lan", choiceNumber, flag);
    }

free(number);

    return 0;
}
