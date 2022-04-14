#include <stdio.h>
    int main (void)
        {
            float kg, mkg;
            
            printf("몸무게를 입력하세요(단위: kg):");
            scanf("%f", &kg);

            mkg=kg*17/100;
            
            printf("달에서의 몸무게는 %f 입니다.", mkg);

            
            return 0;
        }