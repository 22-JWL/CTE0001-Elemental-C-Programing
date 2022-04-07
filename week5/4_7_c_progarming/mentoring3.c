#include <stdio.h>

int main (void){
    int a;
    scanf("%d", &a);
    switch(a)
    {
        case 5:
            printf("a=5");
            break;
        case 4:
        printf("a=4");
        break;

        default:
            printf("나머지");
    }
    return 0;
}