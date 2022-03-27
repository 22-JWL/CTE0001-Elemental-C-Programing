#include <stdio.h>
int main (void)
{
 const double LIGHT_SPEED = 300000;//빛의 속도를 저장하는 변수 (300000km/sec)
 const double SUN_EARTH_DISTANCE = 149600000;// 태양과 지구 사이 거리를 저장하는 변수 149600000km로 초기화한다

 double time;//시간을 나타내는 변수
 time = SUN_EARTH_DISTANCE / LIGHT_SPEED;// 거리를 빛의 속도로 나눈다.
 printf("빛의 속도는 %fkm/s\n", LIGHT_SPEED);
 printf("태양과 지구 사이의 거리는 %fkm\n", SUN_EARTH_DISTANCE);    
 printf("빛이 태양에서 지구까지 도달하는데 걸리는 시간은 %fsec\n", time);    


    return 0;
}