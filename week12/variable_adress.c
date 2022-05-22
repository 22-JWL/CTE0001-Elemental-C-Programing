#include<stdio.h>
int main(void){
    int i = 10;
    char c = 69;
    float f = 12.3;

    printf("i: %u\n", &i);
    printf("c: %u\n", &c);
    printf("f: %u\n", &f);
    return 0;
}