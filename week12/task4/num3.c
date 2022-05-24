#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (void){
    int freq[51]= {0};
    int i, max;
    
    srand((unsigned int) time(NULL));

    for(i=0; i<100; i++){
        ++freq[rand()%51];
    }
    max = 0;
    for (i = 0; i < 51; i++){
        if(freq[i] > max)
            max=i;
    }
        printf("가장 많이 나온수=%d\n", max);
        return 0;
}