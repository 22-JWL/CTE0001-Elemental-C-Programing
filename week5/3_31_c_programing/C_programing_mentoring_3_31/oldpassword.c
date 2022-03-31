#include <stdio.h>
    int main (void)
        {
        int a[] = { 1, 2, 3, 4, 5};
        char d[] ="oldpassword";//d[12]

         for (int i =0; i < sizeof(a) / sizeof(int); i++){
         printf("%d", a[i]);

         }

         for (int j =0; j< sizeof(d) / sizeof(char); j++){
             printf("%c", d[j]);
         }



        }