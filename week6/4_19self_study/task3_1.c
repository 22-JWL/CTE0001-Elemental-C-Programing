#include<stdio.h>

int main (void){

    int multiple;
    multiple = 0; 

    for(int i=1; i<=100; i++){
        if (i%3==0){
            multiple = multiple + i;
        }
    }
    printf("1~ 100까지의 3의 배수의 합 : %d", multiple);
    
    return 0;
}

