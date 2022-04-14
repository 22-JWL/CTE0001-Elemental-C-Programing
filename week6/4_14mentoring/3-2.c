#include <stdio.h>
    int main (void)
        {
            double x;

            printf("16진수 정수를 입력하시오: ");
            scanf("%x", &x);
            printf("8진수로는 %#o 입니다", x);
            printf("10진수로는 %d 입니다", x);
            printf("16진수로는 %#x 입니다", x);

            return 0;
        }