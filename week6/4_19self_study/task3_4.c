#include<stdio.h>
int main (void){

    long integer;
    printf("정수를 입력하시오 : ");
    scanf("%ld", &integer);
    do{
        printf("%ld", integer%10);
        integer = integer/10;

    } while (integer != 0);

    printf("\n");
    return 0;

}