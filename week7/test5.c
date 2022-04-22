#include <stdio.h>// 전처리기. 
    int main (void)
        {/*함수의 시작*/
            
        int a, b, c, sum;
        printf("합이 10이 되는 경우의 조합 ");
            for (a = 1; a<= 6; a++){//첫번째 주사위 값
                for (b = 1; b<=6 ;b++){//두번째 주사위 값
                    for (c = 1; c <= 6; c++){//세번째 주사위 값
                      if ((a + b + c) == 10)
                      {
                          //세 개의 주사위 값 10인경우 print
                        printf("(%d, %d, %d), ", a, b, c);
                        sum += 1;
                      }
                        
                    }
                    
                }
                
            }
            printf("\n총 경우의 수: %d 개", sum);

            return 0;//함수를 종료시키면서 값을 반환하는 키워드이다.
        }//함수의 종료