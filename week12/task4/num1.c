#include<stdio.h>

int pow(int base, int power_raised);

int main(){
    int b;
    int p;

    printf("밑수를 입력해주세요:");
    scanf("%d", &b);
    printf("지수를 입력해주세요:");
    scanf("%d", &p);

    printf("%d\^%d = %d", b, p, pow(b,p));

    return 0;
}

int pow(int base, int power_raised){
    if (power_raised<1)
    {
        return 1;
    }
    else{
        return base *pow(base, power_raised-1);
    }
    
}