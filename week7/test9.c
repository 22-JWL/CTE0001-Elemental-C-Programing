#include <stdio.h>// 전처리기. 
    int main (void)
        {/*함수의 시작*/ 
    
        int sum, edu, in, mil, eng, age;//변수의 선언과 정의
        label:// 잘못입력했으면 돌아오기

        sum=0;//잘못입력했으면 sum=0으로 초기화

        //0, 1로 이지선다, case문으로 점수 추가, 잘못입력했으면goto문으로 되돌아가기
        printf("학력은? 고졸:0 대졸:1 = ");
        scanf("%d", &edu);
        
        switch (edu)
        {
        case 0:
            sum += 1;
            break;
        case 1:
            sum += 2;
            break;        
        default:
            printf("=====오류!!! 처음부터 다시 시도하세요!=====\n");
            goto label;
            break;
        }

        printf("인턴경험은? 유:0 무:1 = ");
        scanf("%d", &in);

        switch (in)
        {
        case 0:
            sum += 2;
            break;
        case 1:
            break;        
        default:
            printf("=====오류!!! 처음부터 다시 시도하세요!=====\n");
            goto label;
            break;
        }

        printf("군역은? 군필:0 미필:1 = ");
        scanf("%d", &mil);

        switch (mil)
        {
        case 0:
            sum += 1;
            break;
        case 1:

            break;        
        default:
            printf("=====오류!!! 처음부터 다시 시도하세요!=====\n");
            goto label;
            break;
        }

        printf("영어점수는? 유:0 무:1 = ");
        scanf("%d", &eng);

        switch (eng)
        {
        case 0:
            sum += 2;
            break;
        case 1:

            break;        
        default:
            printf("=====오류!!! 처음부터 다시 시도하세요!=====\n");
            goto label;
            break;
        }

        printf("나이는?? 30이상:0 30이하:1 = ");
        scanf("%d", &age);

        switch (age)
        {
        case 0:

            break;
        case 1:
            sum += 1;
            break;        
        default:
            printf("=====오류!!! 처음부터 다시 시도하세요!=====\n");
            goto label;
            break;
        }
        
        printf("당신의 가산점은 %d입니다.", sum);




            return 0;//함수를 종료시키면서 값을 반환하는 키워드이다.
        }//함수의 종료0
        