#include <stdio.h>
#include "int_arithmetic.h"

int main()
{
    printf("result of 5-3 is: %d\n", sub_int(5, 3));
    printf("result of 5+3 is: %d\n", add_int(5, 3));
    printf("result of 5*3 is: %d\n", mult_int(5, 3));
    printf("result of 6/3 is: %d\n", div_int(6, 3));
    return 0;

}