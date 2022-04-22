#include <stdio.h>
#include <math.h>// 전처리기 
    int main (void)
        {//함수의 시작
            float x, z, y;//변수의 선언과 정의

            //반복문 시작
            for(x = 1; x<21; x++){
                for(z= 1; z<21; z++){
                    y += sqrt(3*x*x*x+(z*z*z-1));
                }
            }

            //결과값 출력
            printf("%f", y);


            
            return 0;//함수를 종료시키면서 값을 반환하는 키워드이다.
        }//함수의 종료