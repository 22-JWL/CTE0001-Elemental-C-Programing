#include <stdio.h>// 전처리기. 
    int main (void)
        {/*함수의 시작*/
        int x,y, mulx, muly;
        printf("20 이하의 양의 정수 x 와 y를 입력하시오");
        scanf("%d%d", &x, &y);
        printf("1000이하의 정수 중 x의 배수이고 y의 배수인 정수는");

        if( 0<=x && x<=20 && 0<=y && y<=20)
        {
        for (int i = 1; i<=1000; i++)
        {
            
            if(i%x==0 && i%y==0){
                printf("%d ", i);

            }
            
        }
    
            printf(" 입니다.");
        }
        else{
            printf(" 없습니다.");
        }



            return 0;//함수를 종료시키면서 값을 반환하는 키워드이다.
        }//함수의 종료