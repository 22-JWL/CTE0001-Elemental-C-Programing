#include <stdio.h>
int main(void)
{
int x, sum;
x =1;
sum = 0;
while(x<=100)
{
if(x%3==0)
{sum = sum +x;}
x++;
}
printf("1부터 100사이의 모든 3의배수의 합은 %d입니다.\n", sum);
return 0;
}