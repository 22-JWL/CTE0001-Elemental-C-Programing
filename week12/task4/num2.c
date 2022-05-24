#include<stdio.h>
#include<stdlib.h>
#define ROWS 3
#define COLS 5

int main (){

    int i, j;
    int rows_mul_scores, cols_mul_scores;

    int a[ROWS][COLS] = {{12, 56 , 32, 16, 98}, {99, 56, 34, 41, 3}, {65, 3, 87, 78, 21}};

        for ( i = 0; i < ROWS; i++)
    {
            for ( j = 0; j < COLS; j++)            
            printf("%d ", a[i][j]);
        printf("\n");
    }

    for ( i = 0; i < ROWS; i++)
    {
        rows_mul_scores = 0;

        for ( j = 0; j < COLS; j++)
            rows_mul_scores += a[i][j];

        printf("%i쨰 행의 합= %d\n",i+1, rows_mul_scores);
    }

        for ( j = 0; j < COLS; j++)
    {
        cols_mul_scores = 0;

        for ( i = 0; i < ROWS; i++)
            cols_mul_scores += a[i][j];
            
        printf("%i쨰 열의 합= %d\n",j+1, cols_mul_scores);
    }

    return 0;
}