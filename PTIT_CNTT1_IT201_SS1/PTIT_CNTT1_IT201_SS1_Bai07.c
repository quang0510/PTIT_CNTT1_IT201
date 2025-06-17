#include <stdio.h>

int main() {
    int a[] = {1, 4, 2, 3, 5, 2};
    int lenght = sizeof(a) / sizeof(a[0]);
    int flag = 0;

    for (int i = 0; i <lenght - 1; i++) {
        for (int j = i + 1; j < lenght; j++) {
            if (a[i] == a[j]) {
                flag = 1;
                break;
            }
        }
        if (flag) break;
    }

    if (flag)
        printf("Mang co phan tu trung lap.\n");
    else
        printf("Mang khong co phan tu trung lap.\n");

    return 0;
}

// dung 2 vong for long nhau
// do phuc tap thoi gian la 0(n^2)
// do phuc tap khong gian la O(1)
