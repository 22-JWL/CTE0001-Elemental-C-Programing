#include <stdio.h>
int main(){

    int s =10;
    int *f;
    f = &s;
    printf("%d\n", *f);

    int i = 3000;
    int *p = NULL;

    p = &i;

    printf("i = %d\n", i);
    printf("&i = %u\n\n", &i);

    printf("p = %u\n", p);
    printf("*p = %d\n", *p);



}