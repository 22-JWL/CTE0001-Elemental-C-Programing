#include <stdio.h>
    int main (void)
        {
            const double PYEONG_PER_SQUAREMETER = 3.3058;
            double pyeong;
            double cal;
            
            printf("평을 입력 하세요: ");
            scanf("%lf", &pyeong);

            cal = pyeong * PYEONG_PER_SQUAREMETER;

            printf("%lf 평방미터입니다.", cal);

            return 0;
        }