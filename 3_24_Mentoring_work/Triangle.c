#include <stdio.h>
int main(void)
{
    float a;
    float b;
    float c;
    int d = 2;
    float e;

    printf("삼각형의 밑변: ");
    scanf("%f", &a);
    printf("삼각형의 높이: ");
    scanf("%f", &b);
    c = a * b;
    e = c / d; 
    printf("삼각형의 넓이: %f", e);





    return 0;
}