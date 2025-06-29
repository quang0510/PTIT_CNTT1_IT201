
#include <stdio.h>

int count ( int n) {
    if (n == 0 || n == 1) return 1;
    return count(n-1) + count(n-2);

}

int main() {

    int n ;
    printf("nhap so bac thang \n");
    scanf("%d", &n);

    printf("%d\n", count(n));

    return 0;
}