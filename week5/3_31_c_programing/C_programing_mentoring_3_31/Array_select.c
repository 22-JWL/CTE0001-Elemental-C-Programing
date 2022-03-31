#include <stdio.h>
int main(void){
    int a[] = {10, 50, 98, 654, 8065, 46, 546 };
    int min= 9999;
    int max = 0;

    for (int i; i < 7; i++) {

        if(min > a[i]){
            min = a[i];
        }

    }
    for (int i; i < 7; i++) {

        if(max < a[i]){
            max = a[i];
        }

    }

    printf("%d\n", min);
    printf("%d", max);

}