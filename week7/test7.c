#include <stdio.h>// 전처리기. 
    int main (void)
        {/*함수의 시작*/

        //변수 선언 및 초기화
        int input, tax;
        int a=10000000;
        int b=40000000;
        int c=80000000;
        int d=30000000;
        int e=70000000;
        int tthou, thou, hun;

        //연봉 입력및 츨력
        printf("연봉을 입력 하시오 : ");
        scanf("%d", &input);
        tthou = input / 10000;
        thou = input % 10000 /1000;
        hun = input % 10000 % 1000;
        printf("연봉은 %d이며 이것은 %d만 %d천 %d원 입니다.\n",input, tthou, thou, hun);

            //세금계산
            if(input<=a){//연봉이 1000이하인 경우
                tax = input*0.08 ;

                //세금 출력
                tthou = tax / 10000;
                thou = tax % 10000 /1000;
                hun = tax % 10000 % 1000;
                printf("세금은 %d이며 이것은 %d만 %d천 %d원 입니다.",tax, tthou, thou, hun);
            }

            //연봉이 1000만원 초과 ~4000만원인경우
            else if(input<=b){

                //1000만원 초과 ~3000만원 까지 사이의 연봉이면 1000만원은 과세표준 ⓵에 따른다
                if(a < input <= d){

            //결과값 출력
                tax = (input-a)*0.17+a*0.08;

                //세금 출력
                tthou = tax / 10000;
                thou = tax % 10000 /1000;
                hun = tax % 10000 % 1000;
                printf("세금은 %d이며 이것은 %d만 %d천 %d원 입니다.",tax, tthou, thou, hun);
                }
                
                else{
                tax = input *0.17;

                //세금 출력
                tthou = tax / 10000;
                thou = tax % 10000 /1000;
                hun = tax % 10000 % 1000;
                printf("세금은 %d이며 이것은 %d만 %d천 %d원 입니다.",tax, tthou, thou, hun);
                }
            }

            //연봉이 4000만원 초과 ~8000만원인경우
            else if( input<= c){

                //4000만원 초과 ~ 7000만원 까지 사이의 연봉이면 4000만원은 과세표준 ⓶에 따른다
                if(b< input<= e){
                tax = (input-b)*0.26+b*0.17;
               
                //세금 출력
                tthou = tax / 10000;
                thou = tax % 10000 /1000;
                hun = tax % 10000 % 1000;
                printf("세금은 %d이며 이것은 %d만 %d천 %d원 입니다.",tax, tthou, thou, hun);
                }
                else{
                tax = input *0.26;
                
                //세금 출력
                tthou = tax / 10000;
                thou = tax % 10000 /1000;
                hun = tax % 10000 % 1000;
                printf("세금은 %d이며 이것은 %d만 %d천 %d원 입니다.",tax, tthou, thou, hun);
                }
            }
            
            //연봉이8000만원 초과인경우
            else{
                tax = input*0.35;
                
                //세금 출력
                tthou = tax / 10000;
                thou = tax % 10000 /1000;
                hun = tax % 10000 % 1000;
                printf("세금은 %d이며 이것은 %d만 %d천 %d원 입니다.",tax, tthou, thou, hun);
            }
        return 0;//함수를 종료시키면서 값을 반환하는 키워드이다.
        }//함수의 종료