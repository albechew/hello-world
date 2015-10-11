#include <time.h>
#include <stdio.h>

static clock_t begin, end;
void exec_begin(void)
{
    printf("Start execution timer \r\n");
    begin = clock();
}

double exec_end(void)
{
    end = clock();
    printf("Stop execution timer \r\n");
    double time_spent = 0;
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Time spend for execution t= %f sec\r\n", time_spent);
    return time_spent;
}
