#include <stdio.h>
    int main (void)
        {
            float x, y;
            printf("실수를 입력하세요");
            scanf("%f", &x);

            y= x*x*3 +7*x + 11; 
            printf("다항식의 값은 %f", y);
            
            return 0;
        }