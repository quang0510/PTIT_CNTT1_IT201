
#include <stdio.h>
#include <string.h>

\
void bubbleSort(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {

            if (str[j] > str[j + 1]) {

                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    char chuoi[100];



    printf("Nhap chuoi ky tu bat ky: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    chuoi[strcspn(chuoi, "\n")] = '\0';


    printf("\nChuoi truoc khi sap xep: %s\n", chuoi);


    bubbleSort(chuoi);
    printf("Chuoi sau khi sap xep: %s\n", chuoi);

    return 0;
}
