#include <stdio.h>
int main (void)
{
    int x = 10;
    int y = 20;
    int tmp;

    printf("입력: x=%d y=%d\n", x, y);
    
    tmp = x;
    x = y;
    y = tmp;

    

    printf("출력: x=%d y=%d", x, y);


    
    return 0;
}