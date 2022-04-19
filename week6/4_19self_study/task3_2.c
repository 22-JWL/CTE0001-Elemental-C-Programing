#include <stdio.h>
int main (void){

    int integer, i;

    printf("정수를 입력하시오: ");
    scanf("%d", &integer);
    printf("약수 : ");
    for(i = 1; i <= integer; i++){

        if(integer %i ==0){
            printf("%d ", i);
        }
    }
    return 0;
}