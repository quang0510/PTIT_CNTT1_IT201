// tim kiem tuyen tinh

#include <stdio.h>

int main() {
    int arr[7] = {1, 2, 3, 2, 4, 2, 5};
    int a = 2; // phan tu can tim
    int count = 0;

    for (int i = 0; i < 7; i++) {
        if (arr[i] == a) {
            count++;
        }
    }

    printf("Phan tu %d xuat hien %d lan trong mang\n", a, count);
    return 0;
}

// vi thuat toan duyet qua mang 1 lan de so sanh voi so can tim
// do phuc tap thoi gian la O(n)


// khong dung them mang hay danh sach nao
// do phuc tap khong gian la O(1)