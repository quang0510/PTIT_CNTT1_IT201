#include <stdio.h>

    struct Student {
        int id ;
        char name [20];
        int age;
    };

int main() {

    struct Student sv[5];

    int find;
    int count = 0;

    for ( int i = 0 ; i < 5 ; i++) {
        printf("moi ban nhap thong tin sinh vien thu %d \n", i+1);
        printf (" id : ");
        scanf ("%d", &sv[i].id);
        printf (" ten : ");
        scanf ("%s", sv[i].name);
        printf (" tuoi : ");
        scanf ("%d", &sv[i].age);
    }

    printf("moi ban nhap id sinh vien can tim ");
    scanf("%d",&find);

    for ( int i = 0 ; i < 5 ; i++) {
        if (find == sv[i].id) {
            printf (" tim thay sinh vien : \n");
            printf("id : %d\n ", sv[i].id);
            printf("ten : %s\n", sv[i].name);
            printf("tuoi : %d\n", sv[i].age);
            count = 1;
            break;
        }
    }

    if ( count != 1) {
        printf("khong tim thay sinh vien ");
    }


    return 0;
}