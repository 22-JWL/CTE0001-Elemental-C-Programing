#include <stdio.h>
    int main (void)
        {
        float x, y, z;
        
        printf("실수를 입력하시오: ");
        scanf("%f", &x); 
        printf("실수를 입력하시오: ");
        scanf("%f", &y);
        printf("실수를 입력하시오: ");
        scanf("%f", &z);

        float sum = x+y+z;
        float avg = sum/3.0;

        printf("합은 %f이고 평균은 %f입니다.", sum, avg);

            
            return 0;
        }