#include <stdio.h>
int main (void)
{
    float q = 1;
    float w = 2;
    float r = q / w;
    printf("%.0f 나누기 %.0f 는 %.1f 이다\n", q, w, r);

    // 몫과나머지 구하기
    
    int a; //나눠지는 수
    int b; //나누는 수
    int c; // 몫
    int d;//나누는수 * 몫
    int e;//나머지

    //식 입력

    printf("()에 들어갈 수를 입력하시오\n ()/ \n");    
    scanf("%d", &a);
    printf("()에 들어갈 수를 입력하시오\n%d/() \n", a);    
    scanf("%d", &b);
    c = a / b;
    printf("%d / %d 의 몫 : %d\n", a, b, c);

    //몫과 나머지 도출

    d = c * b;
    e = a - d;

    printf("나머지의 값 : %d", e);

    return 0;

}