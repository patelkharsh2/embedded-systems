#include <iostream>
#include "double_arithmetic.h"
#include "int_arithmetic.h"

using namespace std;

int main()
{
    double num1 = 6.4;
    double num2 = 3;
    int num3 = 6;
    int num4=2;

    cout << "INT ARITHMETIC" << endl;
    cout << num3 << "+" << num4 << "=" << add_int(num3, num4) << endl;
    cout << num3 << "-" << num4 << "=" << sub_int(num3, num4) << endl;
    cout << num3 << "*" << num4 << "=" << mult_int(num3, num4) << endl;
    cout << num3 << "/" << num4 << "=" << div_int(num3, num4) << endl;

    cout << "DOUBLE ARITHMETIC" << endl;
    cout << num1 << "+" << num2 << "=" << add_double(num1, num2) << endl;
    cout << num1 << "-" << num2 << "=" << sub_double(num1, num2) << endl;
    cout << num1 << "*" << num2 << "=" << mult_double(num1, num2) << endl;
    cout << num1 << "/" << num2 << "=" << div_double(num1, num2) << endl;

    return 0;
}