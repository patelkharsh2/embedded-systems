#include <iostream>
#include "double_arithmetic.h"

using namespace std;

int main()
{
    double num1 = 6.4;
    double num2 = 3;

    cout << num1 << "+" << num2 << "=" << add_double(num1, num2) << endl;
    cout << num1 << "-" << num2 << "=" << sub_double(num1, num2) << endl;
    cout << num1 << "*" << num2 << "=" << mult_double(num1, num2) << endl;
    cout << num1 << "/" << num2 << "=" << div_double(num1, num2) << endl;

    return 0;
}