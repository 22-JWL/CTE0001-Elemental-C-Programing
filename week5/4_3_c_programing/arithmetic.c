#include<stdio.h>

int main (void){
    int x, y, result;

    printf("두개의 정수를 입력하시오: ");
    scanf("%d %d", &x, &y);

    result = x + y;//덧셈
    printf("%d + %d = %d\n", x, y, result);

    result = x - y;//뺄셈
    printf("%d - %d = %d\n", x, y, result);

    result = x * y;//곱셈
    printf("%d * %d = %d\n", x, y, result);

    result = x / y;//나눗셈 정수형끼리의 나눗셈에서는 결과가 정수형 생성 부동소수점끼리는 부동소수점 값 생성
    printf("%d / %d = %d\n", x, y, result);

    result = x % y;//나머지 연산
    printf("%d %% %d = %d\n", x, y, result);

    return 0;
}