#include <stdio.h>
    int main (void)
        {

            float length, height, square;

            printf("삼각형의 밑변: ");
            scanf("%f", &length);
            printf("삼각형의 높이: ");
            scanf("%f", &height);

            square =length*height/2;
            printf("삼각형의 넓이: %f", square);



            
            return 0;
        }