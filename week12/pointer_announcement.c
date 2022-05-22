#include<stdio.h>
int main (){
    int i = 10;//정수형 변수 i 선언
    int *p;//포인터 변수 p 선언
    p = &i;// 변수 i의 주소가 포인터 p로 대입


    char c = 'A';
    float f = 36.5;
    double d =3.141592;

    char *pc = &c;//문자를 가리키는 포인터pc
    float *pf = &f;
    double *pd = &d;//실수를 가리키느 포인터 pd

    int a = 10;
    double b =12.3;
    int *pa = NULL;
    
    double *pb = NULL;
    pa = &a;
    pb = &b;

    printf("%u %u\n", pa, &a);
    printf("%u %u\n", pb, &b);
    return 0;
}