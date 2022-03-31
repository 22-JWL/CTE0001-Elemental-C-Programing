#include <stdio.h>
    int main (void)
        {
            for(int i =0; i<5; i++){

                for(int j =0; j<i; j++){
                printf(" ");

               }

                for(int j= 5; j>i; j--){
                    printf("*");

                    }

                printf("\n");
                
            }


            for(int i =0; i<5; i++){

                for(int j =4; j>i; j--){
                printf(" ");

               }

                for(int j= 0; j<=i; j++){
                    printf("*");

                    }

                printf("\n");
                
            }
        }