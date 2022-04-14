#include <stdio.h>
    int main (void)
        {
            int asc; 
            printf("아스키코드 값을 입력하시오");
            scanf("%d", &asc);
            printf("문자%c 입니다.", asc);
            printf("32 를 더하면 문자%c 입니다.", asc+32);
            return 0;
        }