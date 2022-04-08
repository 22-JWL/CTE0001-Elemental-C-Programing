#include <stdio.h>
int main (void){

    int a, b, c, Min;
    printf("3개의 정수를 입력하시오:");
    scanf("%d%d%d", &a,&b,&c);
    if(a>b)
    {
        if(b<c)Min = b;
        else Min = c;
    }
    else {
        if (a<c) Min = a;
        else Min = c;
    }
    printf("제일 작은 정수는%d 입니다.", Min);
    return 0;
}