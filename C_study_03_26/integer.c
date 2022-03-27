#include <stdio.h>
int main (void)
{
    short year = 0;//0으로 초기화 한다
    int sale = 0;//0으로 초기화 한다
    long total_sale = 0;//0으로 초기화 한다
    long long large_value;

    year = 10; 
    sale = 20000000;
    total_sale = year * sale;   

    printf("total_sale = %d \n", total_sale);
    return 0;
}