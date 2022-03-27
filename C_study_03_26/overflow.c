#include <stdio.h>
#include <limits.h>

int main (void) //SHRT_MAX는 limits.h에 포함되어 있다.
{//short:-32768~ +32767
    short s_money = SHRT_MAX;//최대값으로 초기화 한다. 32767
    unsigned short u_money = USHRT_MAX;// 최대값으로 초기화한다. 65535

    s_money = s_money + 2;
    printf("s_money = %d", s_money);

    u_money = u_money + 1;
    printf("u_money = %d", u_money);
    
    return 0;
}