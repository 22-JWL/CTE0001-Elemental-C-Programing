#include <stdio.h>

int main(){
    int i = 10;
    int *p = NULL;//포인터도 변수이다.

    p = &i;
    printf("i = %d\n", i);
    *p=20;//==> i=20; 위험한코드일 수 있음
    printf ("i = %d\n", i);
    return 0;
}