// 여러개의 값을 한번에 출력할 때
#include <stdio.h>
    int main (void)
        {
            int a[] = { 1,2,3,4,5 };
            char b[]="C project";
            char c[] = { 'a', 'b', 'c', '\0'};
                for(int i=0; i<5; i++)
                {
                printf("%d", a[i]);
                printf("\n");
                }
            printf("\n");
             printf("%d", a[1]);

             char d[]={'a', 'b', 'c'};
            //  printf("%d", sizeof(a)/ sizeof(char));
            
            return 0;
        }