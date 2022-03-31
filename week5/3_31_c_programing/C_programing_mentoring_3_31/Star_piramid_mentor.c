#include <stdio.h>
    int main (void)
    {
        for (int i = 0; i<5; i++) {
            int j = 0;
            for (; j < 5-i-1; j++)printf(" ");
            for (; j < 5; j++)printf("*");
            printf("\n");
        }
    }