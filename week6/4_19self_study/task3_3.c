#include<stdio.h>
int main (void){

    int integer, sum;
    printf("n의 값을 입력하시오");
    scanf("%d", &integer);

    for(int i=0; i<= integer; ++i){
        sum += i*i;
    }
    printf("계산된 값은 %d 입니다", sum);
}