#include<stdio.h>
int main (void){
    int a, b;
    printf("현재 시간과 나이를 입력 하시오(시간, 나이):");
    scanf("%d%d", &a, &b);

    if (a<9 || a>24 && b>0)
    {
        printf("영업시간 종료입니다.");
    }
    else if(a>=9 && a<=17 && b>=12 && b<65){
        printf("요금은 34,000 입니다");
    }
    else if(a<24 && a>17 && b>=12 && b<65){
        printf("요금은 15,000 입니다");
    }
    else if(a<24 && a>17 && b<12 || b>=65){
        printf("요금은 10,000 입니다");
    }
    else{
        printf("요금은 25,000 입니다.");
    }

    // a>=9 && a<=17 && b>12 || b<=65
    return 0;
}