#include <stdio.h>

int sw(int x, int y){
    x=8;
    y = 5;
    int sum = x + y;
    printf("%d\n", sum);
    return sum;
}

int main(void)
{
    int a = 5, b =8;
    int c;
    c =sw(a,b);
    printf("%d", c);

}
