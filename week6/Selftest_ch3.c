#include<stdio.h>

int main(void){

    int a, b, c, d ,e;
    
    printf("실수를 입력하시오");
    scanf("%d", &a);
    printf("실수를 입력하시오");
    scanf("%d", &b);
    printf("실수를 입력하시오");
    scanf("%d", &c);
    
    d=a+c+b;
    e=(a+c+b)/3;

    printf("합은 %d 이고 평균은 %d입니다", d, e);
}