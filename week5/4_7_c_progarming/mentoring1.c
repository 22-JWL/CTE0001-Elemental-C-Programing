#include<stdio.h>
int main(void){
    //타입 사이즈
    printf("char사이즈%d\n", sizeof(char));
    printf("short사이즈%d\n", sizeof(short));
    printf("int사이즈%d\n", sizeof(int));
    printf("float사이즈%d\n", sizeof(float));
    printf("long사이즈%d\n", sizeof(long));//정수형 int보다 미세하게 크다 32bit에서는 4사이즈
    printf("double사이즈%d\n", sizeof(double));

    //논리연산자
    for (int i = 0; i<5; i++) {
        printf("반복%d번째\n", i);
    }
    int i = 0;
    while(i<5){
        printf("반복 %d번째\n", i);
        i++;
    }

    // while (1){
    //     int a = 1;
    //     printf("반복")
    //    if( a == 1){ break;}

    // }
    int x =5;
    if( x == 0) {
        printf("i=0이다");

    }
    else if (x>=5){
        printf("i=5보다 크다");
    }
    else{
        printf("모름");
    }
        
        //배열
int arr[] = {1,2,3,4,5};
    for (int i = 0; i < sizeof(arr)/ sizeof(int); ++i){
        printf("배열 arr의 [%d]요소 = %d\n", i, arr[i]);
    }
        
        char d[50];
        printf("입력");
        scanf("%s",d);
        printf("출력%s", d);
}
