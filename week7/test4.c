#include <stdio.h>// 전처리기.
    int main (void)
        {/*함수의 시작*/ 
            
            //변수의 선언과 정의
            int input;
            int tthou, thou, hun, ten ,fst;

            //입력
            printf("다섯 자리의 수를 입력하시오 : ");
            scanf("%d", &input);

                //세금 출력 + 만, 천, 백, 십, 일 단위구분
                tthou = input / 10000;
                thou = input % 10000 / 1000;
                hun = input % 1000 / 100;
                ten = input % 100 / 10;
                fst = input % 10;
                printf("%d이며 이것은 %d만 %d천 %d백 %d십 %d입니다.",input, tthou, thou, hun, ten, fst);
            // 변수 초기화

            //결과값 출력
            return 0;//함수를 종료시키면서 값을 반환하는 키워드이다.
        }//함수의 종료