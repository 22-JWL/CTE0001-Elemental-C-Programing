#include <stdio.h>
#include <math.h>// 지수 계산위해 전처리기 추가
    int main (void)
        {//함수의 시작
            float x, z;
            double y=0;//변수의 선언과 정의

            //시그마 1~20 까지 계산 
            for(x = 1; x<21; x++){
                for(z= 1; z<21; z++){
                    y += sqrt(3*x*x*x+(z*z*z-1));
                }
            }

            //결과값 출력
            printf("%lf", y);


            
            return 0;//함수를 종료시키면서 값을 반환하는 키워드이다.
        }//함수의 종료