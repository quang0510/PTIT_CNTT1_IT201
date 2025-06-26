
#include<stdio.h>
#include <stdlib.h>

int fibonacci(int n) {
    if(n==0) return 0;
    else if(n==1 || n==2) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;
    printf("Nhap n : ");
    scanf("%d", &n);
    if (n == 0) printf("Input khong hop le!");
    int *array = (int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++) {
        array[i] = fibonacci(i);
    }
    for(int i=0;i<n;i++) {
        printf("%d ",array[i]);
    }
}