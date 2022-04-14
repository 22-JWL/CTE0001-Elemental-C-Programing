#include <stdio.h>
    int main (void)
        {
            int x, y, emty;

            x= 10;
            y= 20;

            printf("x=%d y=%d\n", x, y);

            emty = x;
            x = y;
            y = emty;

            printf("x=%d y=%d", x, y);

            
 




            
            return 0;
        }