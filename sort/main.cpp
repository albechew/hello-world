#include <iostream>
#include <stdio.h>
#include <string.h>
#include "main.h"

using namespace std;
#define LENGTH 99
#define MAX_RANGE 1000


int main()
{
    int array_wip[LENGTH];
    int array_ori[LENGTH];
    cout << "Hello world!" << endl;
    printf("Create a Random array of %d\r\n",LENGTH);
    random_array_generator(array_ori, LENGTH, MAX_RANGE);
    memcpy(array_wip, array_ori, sizeof(array_ori));
    printf("Print out generated Array\r\n");
    print_array(array_ori, LENGTH);

    //start sorting
    printf("Start bubble sort\r\n");
    exec_begin();
    bubble_sort(array_wip, LENGTH);
    exec_end();

    memcpy(array_wip, array_ori, sizeof(array_ori));
    printf("Start insert sort\r\n");
    exec_begin();
    insert_sort(array_wip, LENGTH);
    exec_end();
    printf("Sorted result:\r\n");
    print_array(array_wip, LENGTH);

    return 0;
}


