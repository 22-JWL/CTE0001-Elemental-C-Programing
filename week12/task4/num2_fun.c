#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROWS 3
#define COLS 5

int main (void)
{
    int s[ROWS][COLS];
    int i, j;
    srand((unsigned int) time(NULL));

    for ( i = 0; i < ROWS; i++)
    {
        for ( j = 0; j < COLS; j++)
        {
            s[i][j] = rand() % 100;
        }
    }
    for ( i = 0; i < ROWS; i++)
    {
        for ( j = 0; j < COLS; j++)
        {
            printf("%02d ", s[i][j]);
        }
        printf("\n");
    }

    for ( i = 0; i < ROWS; i++)
    {
        double final_scores = s[i][0] + s[i][1] + s[i][2] +
            s[i][3] + s[i][4];
        printf("학생 %i 의 최종 성적 = %10.2f \n", i+1, final_scores);
    }
    return 0;
}