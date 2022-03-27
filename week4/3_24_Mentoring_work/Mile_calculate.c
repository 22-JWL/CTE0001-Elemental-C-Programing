#include <stdio.h>
int main (void)
{
    long double b = 1609;
    float a;
    long double c;
    float d;
    float e;

    printf("마일을 입력하시오: ");
    scanf("%f", &a);

    c = a * b;

    printf("%.1f마일은 %f미터 입니다.", a, c);

   return 0;
}