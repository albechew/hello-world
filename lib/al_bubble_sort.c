#include <stdio.h>
#include "main.h"
#include "al_swap.h"

void bubble_sort(int *array, const int length)
{
    int n, newn;
    n = length;
    do
    {
        newn = 0;
        for(int i = 1; i<n;i++)
        {
            if(array[i-1] > array[i])
            {
                swap(&array[i-1], &array[i]);
                newn = i;
                #if DEBUGMSG != 0
                printf("i=%d\r\n",i);
                print_array(array, length);
                #endif // DEBUGMSG
            }
        }
        n = newn;
        #if DEBUGMSG != 0
        printf("finished for n=newn=%d\r\n",n);
        #endif // DEBUGMSG
    }while( n!= 0);
    #if DEBUGMSG != 0
    printf("bubble sort finished\r\n");
    print_array(array, length);
    #endif // DEBUGMSG
}
