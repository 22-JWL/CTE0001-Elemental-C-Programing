#include <stdio.h>
#define TAX_RATE 0.2//1.기호상수 선언
int main (void)
{
    const int MONTHS = 12;//2.기호상수 선언
    int m_salary, y_salary;//변수 선언

    printf("월급을 입력하시요: ");//입력 안내문
    scanf("%d", &m_salary);

    y_salary = MONTHS*m_salary;//순수입 계산

    printf("연봉은 %d입니다.", y_salary);
    printf("세금은 %f입니다.", y_salary*TAX_RATE);

    return 0;

    /*기호상수 사용이유: 중력가속도나 파이값등은 불변이며 상수값에 이름을 붙이기 때문에 프로그램을 읽기가 쉬워진다.
    일반적으로 상수 이름은 대문자로하며 'const 자료형' 으로 작성하는 것이 문법적 검사, 상수 정의되는 범위 변수와 같이 제한
    배열이나 구조체와 같은 복합데이터 타입에서도 const는 사용가능하므로 유리하다. */
}