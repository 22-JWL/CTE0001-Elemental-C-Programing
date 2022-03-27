#include <stdio.h>
int main (void)
{
    float a;

    printf("실수를 입력하시오 : ");
    scanf("%f", &a);
    printf("실수 형식으로는 %f입니다", a);
    printf("지수 형식으로는 %e입니다", a);

    return 0;
}