#include <stdio.h>
    int main (void)
        {
            double x, y, z, cubic;
            printf("상자의 가로 세로 높이를 한번에 입력");
            scanf("%lf%lf%lf", &x, &y, &z);

            cubic = x*y*z;

            printf("상자의 부피 %lf", cubic);
            
            
            return 0;
        }