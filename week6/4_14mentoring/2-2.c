#include <stdio.h>
int main (void){
    float mile, meter, ex;
    printf("마일을 입력하시오 : ");//scanf 2개 연속으로 하고싶을때!
    scanf("%f%f", &mile, &ex);

    meter = mile*1609;
    printf("%.1f마일은 %f미터 입니다.%f", mile, meter, ex);//printf 연속으로 하고싶을 때!
    
    return 0;
}