#include <stdio.h>


void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;


    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];


    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }


    while (i < n1)
        arr[k++] = L[i++];
    while (j < n2)
        arr[k++] = R[j++];
}


void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;


        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);


        merge(arr, left, mid, right);
    }
}

int main() {
    int n;
    int number[1000];

    printf("Nhap so luong phan tu cua mang (0 < n <= 1000): ");
    scanf("%d", &n);

    if (n <= 0 || n > 1000) {
        printf("So luong khong hop le\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Moi ban nhap vao gia tri cua phan tu thu %d: ", i + 1);
        scanf("%d", &number[i]);
    }

    printf("\nMang truoc khi sap xep la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", number[i]);
    }
    printf("\n");

    // Gọi Merge Sort
    mergeSort(number, 0, n - 1);

    printf("\nMang sau khi sap xep la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", number[i]);
    }

    return 0;
}
