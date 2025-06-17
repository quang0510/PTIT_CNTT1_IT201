#include<stdio.h>
int main(){

    int number[5]={2,1,8,5,9};
    for(int i=0;i<5;i++){
        for(int j=0;j<5-1-i;j++){
            if(number[j]>number[j+1]){
                int flag;
                flag=number[j];
                number[j]=number[j+1];
                number[j+1]=flag;
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("%d\t", number[i]);
    }
    return 0;
}

// sap xep kieu bubble sort
// do phuc tap thuat toan la o(n^2)
// do phuc tap thoi gian la O(1)