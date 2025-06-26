
#include <stdio.h>

void prinNumber(int n) {
    if (n <= 0 ) {
        return 1;

    }
    prinNumber(n-1);
    printf("%d \n", n);
}

int main() {
    int n;
    printf("Nhap so nguyen duong bat ki :");
    scanf("%d", &n);
    prinNumber(n);


    return 0;
}