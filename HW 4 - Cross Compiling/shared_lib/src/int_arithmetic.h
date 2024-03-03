//header file for int arithmetic 
#ifndef INT_ARITHMETIC_H
#define INT_ARITHMETIC_H

#ifdef __cplusplus
//external C arithemtic functions to be run by C++ 
extern "C"{
    #endif
    int add_int(int num1, int num2);
    int sub_int(int num1, int num2);
    int mult_int(int num1, int num2);
    int div_int(int num1, int num2);
    #ifdef __cplusplus
}
#endif
#endif