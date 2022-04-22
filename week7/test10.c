#include <stdio.h>// 전처리기. 
    int main (void)
        {/*함수의 시작*/ 

        double height, weight, norweight, sum;

        printf("당신의 키와 몸무계를 입력하시오 키, 몸무게");
        scanf("%lf %lf", &height, &weight);

        norweight= (height-100)*0.9;
        sum = weight - norweight;

        printf("표준체중은 %lf 입니다.", norweight); 
        printf("당신의 몸무게와 표준체중의 차이는 %lf - %lf로 %lf입니다", weight, norweight, sum); 

            return 0;//함수를 종료시키면서 값을 반환하는 키워드이다.
        }//함수의 종료