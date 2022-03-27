#include <stdio.h>
int main (void)
{

    int x;
    printf("변수 x의 크기: %d\n", sizeof(x));
    printf("char의 크기: %d\n", sizeof(char));
    printf("int의 크기: %d\n", sizeof(int));
    printf("short의 크기: %d\n", sizeof(short));
    printf("long의 크기: %d\n", sizeof(long));

    printf("long long의 크기: %d\n", sizeof(long long));
    printf("float의 크기: %d\n", sizeof(float));
    printf("double의 크기: %d\n", sizeof(double));

    return 0;
}