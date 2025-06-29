
#include<stdio.h>

int maxNumber( int number[] , int n , int i , int max) {
    if ( i == n) return max;
    return max < number[i] ? maxNumber(number , n , i+1 , number[i]) : maxNumber(number , n , i+1 , max);
}

int minNumber( int number[] , int n , int i , int min) {
    if ( i == n) return min;
    return min > number[i] ? minNumber(number , n , i+1 , min[i]) : minNumber(number, n , i+1 , min);
}

int main() {
    int n;
    printf("nhap so luong phan tu cco trong mang \n");
    scanf("%d", &n);
    printf("nhap mang");
    int number[n];

    for (int i = 0; i < n; i++) {
        printf("number[%d]", i);
        scanf("%d", &number[i]);

    }
    printf ( " %d , %d \n", minNumber(number , n , 1 , number[0]) , maxNumber(number , n , 1 , number[0]));
    return 0;

}


