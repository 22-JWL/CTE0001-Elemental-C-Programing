#include <stdio.h>
    int main (void)
        {
            double x, y, result;

            printf("두개의 실수를 입력하시오: ");
            scanf("%lf %lf", &x, &y);

            result= x/y;
            printf("%f / %f= %f", x,y, result);


            
            return 0;
        }