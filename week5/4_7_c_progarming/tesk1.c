#include <stdio.h>
int main (void)
{
    char a;
    printf("문자를 입력하시오 :");
    scanf("%c", &a);
    switch(a)
    {
        case 'a':
        printf("모음입니다.");
        break;

        case 'e':
        printf("모음입니다.");
        break;
        case 'i':
        printf("모음입니다.");
        break;
        case 'o':
        printf("모음입니다.");
        break;

        case 'u':
        printf("모음입니다.");
        break;

        case 'A':
        printf("모음입니다.");
        break;

        case 'E':
        printf("모음입니다.");
        break;
        case 'I':
        printf("모음입니다.");
        break;
        case 'O':
        printf("모음입니다.");
        break;

        case 'U':
        printf("모음입니다.");
        break;

        default:
            printf("자음입니다.");
    }
    return 0;
}