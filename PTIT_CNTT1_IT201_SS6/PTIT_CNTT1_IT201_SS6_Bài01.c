
#include <stdio.h>

int converToBinary (int n) {
    if ( n == 0 ) return 0;
    converToBinary(n/2);
    printf("%d", n/2);
}

int main() {

    int n;
    printf("moi ban nhap so nguyen duong bat ky ");
    scanf("%d", &n);
    converToBinary(n);

    return 0;
}