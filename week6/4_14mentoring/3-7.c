#include <stdio.h>
    int main (void)
        {
            double m, v, j;

            printf("질량(kg): ");
            scanf("%lf", &m);

            
            printf("속도(m/s): ");
            scanf("%lf", &v);

            j= m*v*v/2.0;

            printf("운동에너지(J): %lf", j);


            
            return 0;
        }