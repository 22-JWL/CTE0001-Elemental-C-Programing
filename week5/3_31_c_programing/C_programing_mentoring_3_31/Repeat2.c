#include <stdio.h>
    int main (void)
        {
            int N;
            printf("어디까지 반복");
            scanf("%d", &N);

            for (int i =1; i<= N; i++) {
            printf("%d", i);
            for (int j = 1; j<= i; j++){
                printf("%d", j);

            }
            printf("\n");
            }
            
            return 0;
        }