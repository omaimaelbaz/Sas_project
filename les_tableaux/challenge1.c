#include <stdio.h>
    int main ()
    {
        int tab[10] = {1,2,3,4,5,6,7,8,9,10};
        int i;
        i=0;
        while (i < 10)
        {
            printf(" tab[%d] =  %d \n", i ,tab[i] );
            i++;
        }
    }