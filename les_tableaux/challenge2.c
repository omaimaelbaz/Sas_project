#include <stdio.h>
int main ()
{
    int tab[10];
    int i;
    int max;
    int min;

   i =0;
   while ( i<10)
   {
    printf("tab[%d] = " ,i+1);
    scanf("%d" , &tab[i]);
    i++;
   }
   // aficher tous les valeur dans le tableaux
    printf("les valeur que vous avez enterer:\n");
    for (i = 0; i < 10; i++)
    {
        printf("tab[%d] = %d\n", i, tab[i]);
    }
     // maximun valeur dans tab[10]
    max = tab[0];
    min = tab[0];
    for (i = 1; i < 10; i++)
    {
        if (tab[i] > max)
        {
            max = tab[i];
             
        }
        else if ( tab[i] < min)
        {
            min = tab[i];
        }
     
        
    }
    printf (" %d c est le maximun \n",max); 
    printf (" %d c est le minimun ",min); 
   }
    