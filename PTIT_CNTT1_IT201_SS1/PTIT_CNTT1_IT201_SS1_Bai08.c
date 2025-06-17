#include <stdio.h>

int main() {
    int a[] = {1, 3, 2, 3, 4, 3, 5};
    int lenght = sizeof(a) / sizeof(a[0]);
    int maxCount = 0;
    int value ;

    for (int i = 0; i < lenght; i++) {
        int count = 0;
        for (int j = 0; j < lenght; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            value = a[i];
        }
    }

    printf("Phan tu xuat hien nhieu nhat la %d (%d lan)\n", value, maxCount);

    return 0;
}

// dung 2 vong for long nhau
// do phuc tap thoi gian la 0(n^2)
// do phuc tap khong gian la O(1)