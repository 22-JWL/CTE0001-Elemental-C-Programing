#include <stdio.h>
    int main (void)
        {/*함수의 시작*/

            //변수의 선언과 정의
            char alpha;

            //알파벳 문자 입력
            printf("알파벳 문자를 입력하시오 : ");
            scanf("%c", &alpha);

            //소문자 대문자로 변환
            alpha -= 32;

            //결과값 출력
            printf("변경된 문자는 %c 이고 코드값은 %d입니다.", alpha, alpha);
            
            return 0;//함수를 종료시키면서 값을 반환하는 키워드이다.
        }//함수의 종료