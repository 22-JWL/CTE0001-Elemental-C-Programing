#include <stdio.h>
    int main (void)
        {
            float f;
            double c;
            printf("화씨 값을 입력하시오");
            scanf("%f", &f);

            c= (5.0/9.0)*(f-32.0);

            printf("섭씨값은 %lf도 입니다.", c);
            
            return 0;
        }