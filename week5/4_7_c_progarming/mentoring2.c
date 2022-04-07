#include<stdio.h>
int main (void){

    //문제3 3개의 정수 갓ㅂㅅ을 잆력받아서 3새의 정수 갓ㅂ중에서 최대값을 출력하는 프로그햄을 저ㅏ작성하라
    
    int a, b, c, Max;
    printf("정수 3개 입력");
    scanf("%d%d%d", &a,&b,&c);
    if(a<b)
    {
        if(b>c)Max = b;
        else Max = c;
    }
    else {
        if (a>c) Max = a;
        else Max = c;
    }
    printf("Max=%d", Max);


return 0;

}