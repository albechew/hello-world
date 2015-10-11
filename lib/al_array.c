#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void random_array_generator(int *array, const int length, const int max_range)
{
    srand(time(0));
    for (int i = 0; i< length; i++)
    {
        array[i] = rand()%max_range;
    }
}

void print_array(int *array, const int length)
{
    for (int i = 0; i< length; i++)
    {
        printf("%d ",array[i] );
    }
    printf("\r\n");
}


