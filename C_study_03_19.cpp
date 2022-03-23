#include <stdio.h>
int main(void){
    float x = 10;
    float y = 20;
    int sum = x + y;
    int diff = x - y;
    int mul = x * y;
    float div = x / y;
    
    printf("덧셈 : %d\n뺄셈 : %d\n곱셈 : %d\n나눗셈 : %.1f\n", sum, diff, mul, div);
    
// 나눗셈의 몫과 나머지 구하기

    
    float a;
    float b;
    float e;
    
    scanf("%0f", &a);
    printf("\n()에 들어갈 수를 입력하시오\n%.0f/() \n", a);    
    scanf("%0f", &b);
    printf("%.0f / %.0f : ", a, b);
    
    e = a / b;
    printf("%.1f", e);
        
    

    return 0;
}
