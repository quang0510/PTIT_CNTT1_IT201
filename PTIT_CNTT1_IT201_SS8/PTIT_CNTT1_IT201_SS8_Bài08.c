

#include <stdio.h>

#include <stdlib.h>

void insertionSort(int *array, int size) {

    for (int i = 1; i < size; i++) {

        int current = array[i];

        int j = i - 1;

        while (j >= 0 && array[j] > current) {

            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = current;
    }

    printf("Mang sau khi sap xep: ");

    for (int i = 0; i < size; i++) {

        printf("%d ", array[i]);
    }
    printf("\n");

}

void linearSearch(int *array, int size, int a) {

    int found = 0;
    for (int i = 0; i < size; i++) {

        if (array[i] == a) {

            printf("Tim thay %d tai vi tri %d (tinh tu 1)\n", a, i + 1);
            found = 1;

            break;
        }
    }
    if (found == 0) {

        printf("Khong tim thay %d trong mang.\n", a);
    }
}


int binarySearch(int *array, int size, int a) {

    int left = 0, right = size - 1;

    while (left <= right) {

        int mid = (left + right) / 2;

        if (array[mid] == a) {

            return mid;

        } else if (a < array[mid]) {
            right = mid - 1;

        } else {

            left = mid + 1;
        }
    }

    return -1;
}

int main() {
    int n;

    int *numbers;

    int value;

    int choice;

    printf("Nhap so luong phan tu cua magn: ");
    scanf("%d", &n);

    numbers = (int *)malloc(n * sizeof(int));

    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("numbers[%d] = ", i);
        scanf("%d", &numbers[i]);
    }

    do {
        printf("\n=== MENU CHUC NANG ===\n");
        printf("1. Sap xep mang (Insertion Sort)\n");
        printf("2. Tim kiem tuyen tinh\n");
        printf("3. Tim kiem nhi phan\n");
        printf("4. Thoat chuong trinh\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertionSort(numbers, n);
                break;

            case 2:
                printf("Nhap gia tri can tim (Linear Search) : ");
                scanf("%d", &value);
                linearSearch(numbers, n, value);
                break;

            case 3:
                printf("Nhap gia tri can tim (Binary Search - can sap xep truoc): ");

                scanf("%d", &value);
                int resultIndex = binarySearch(numbers, n, value);

                if (resultIndex != -1) {
                    printf("Tim thay %d tai vi tri %d (tinh tu 1)\n", value, resultIndex + 1);
                } else {
                    printf("Khong tim thay %d trong mang.\n", value);
                }
                break;

            case 4:
                printf("Ket thuc chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le. Vui long nhap lai.\n");
                break;
        }

    } while (choice != 4);

    free(numbers);

    return 0;
}
