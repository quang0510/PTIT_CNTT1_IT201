
#include<stdio.h>
#include<string.h>
int palindrome(char text[50],int i,int j) {
    if (i >= j) return 1;
    return text[i] == text[j] ? palindrome(text,i+1,j-1) : 0;
}

int main() {
    char text[50];
    printf("Nhap chuoi : ");
    fgets(text,50,stdin);
    text[strcspn(text,"\n")] = 0;
    palindrome(text,0,strlen(text) - 1) ? printf("Palindrome Valid\n") : printf("Palindrome Invalid\n");
}