#include <stdio.h>
#include "main.h"

void insert_sort(int *array, const int length)
{
    int x,j,i;
    for (i = 1; i<length ; i++)
    {
        x = array[i];
        j = i;
        #if DEBUGMSG != 0
        printf("i = %d\r\n",i);
        printf("x = %d\r\n",x);
        #endif // DEBUGMSG
        while( j>0 && array[j-1]>x)
        {
            array[j] = array[j-1];
            j = j - 1;
            #if DEBUGMSG != 0
            print_array(array, length);
            printf("j = %d\r\n",j);
            #endif // DEBUGMSG
        }
        array[j] = x;
        #if DEBUGMSG != 0
        print_array(array, length);
        #endif // DEBUGMSG
    }
}
