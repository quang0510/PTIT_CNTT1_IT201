
#include <ctype.h>
#include<stdio.h>
#include<string.h>
int stringToInt(char text[50],int i) {
    if (i < 0) return 0;
    if (!isdigit(text[i])) return 0;
    int digit = text[i] - '0';
    return stringToInt(text,i-1) * 10 + digit;
}

int main() {
    char text[50];
    printf("Nhap chuoi : ");
    fgets(text,50,stdin);
    text[strcspn(text,"\n")] = 0;
    stringToInt(text,strlen(text)-1) ? printf("%d\n",stringToInt(text,strlen(text)-1)) : printf("Input khong hop le!");
}