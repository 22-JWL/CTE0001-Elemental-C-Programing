#include <stdio.h>
    int main (void)
        {/*함수의 시작*/ 

            //변수의 선언과 정의
            long inputsec;
            int hr, min, sec;

            //초 입력
            printf("초(sec)을 입력하시오 : ");
            scanf("%ld", &inputsec);

            //시간 분 초로 변수 초기화
            hr = inputsec / 3600;
            min = inputsec % 3600 /60;
            sec = inputsec % 3600 % 60;

            //결과값 출력
            printf("입력한 %ld 초는 %d시간 %d분 %d초 입니다.", inputsec, hr, min, sec);
            return 0;//함수를 종료시키면서 값을 반환하는 키워드이다.
            
        }//함수의 종료