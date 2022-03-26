#include <stdio.h>
int main (void)
{
    int a;
    float b = 1.8;
    int c = 32;
    float d;
    float e;

    printf("화씨값을 입력하시오:");
    scanf("%d", &a);

    d = a - c;
    e = d * b;
    
    printf("섭씨값은 %f도 입니다.", e);
    
    return 0;
}