#include "gigasecond.h"
#include <time.h>
#include <string.h>

void gigasecond(time_t input, char *output, size_t size)

{
    time_t result = input + 1000000000; 
    struct tm *tm = localtime(&result);
    strftime(output, size, "%Y-%m-%d %H:%M:%S", tm);
}