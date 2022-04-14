#include <stdio.h>
#define SQUEREMETER_PER_PYEONG 3.3058
    int main (void)
        {

            double pyeong, meter; 

            printf("평을 입력하세요");
            
            scanf("%lf", &pyeong);

            meter= SQUEREMETER_PER_PYEONG * pyeong;

            printf("%lf평방미터입니다.", meter);
            return 0;
        }