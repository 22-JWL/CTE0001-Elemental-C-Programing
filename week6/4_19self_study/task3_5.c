#include<stdio.h>
int main (void){
    for(int i=0; i<=5; ++i){
      
        for (int x = 5; x >= i; --x)
        {
            printf(" ");
        }
        for (int y = 0; y <= i; ++y)
        {
            printf("*");
        }
            printf("\n");        
    }
    return 0;
}