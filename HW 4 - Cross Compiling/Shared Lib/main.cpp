#include <iostream>
#include "src/double_arithmetic.h"
#include "src/int_arithmetic.h"

using namespace std;

int main()
{
    //variable declaration
    double num1 = 6.4;
    double num2 = 3;
    int num3 = 6;
    int num4=num2;

    //int arithmetic functions
    cout << endl << "INT ARITHMETIC" << endl;
    cout << num3 << "+" << num4 << "=" << add_int(num3, num4) << endl;
    cout << num3 << "-" << num4 << "=" << sub_int(num3, num4) << endl;
    cout << num3 << "*" << num4 << "=" << mult_int(num3, num4) << endl;
    
    //error handling for div by 0
    if(num4!=0)
    {
        cout << num3 << "/" << num4 << "=" << div_int(num3, num4) << endl;
    }
    else cout << "Division by 0 is not allowed" << endl;;

    //double arithmetic functions
    cout << endl << "DOUBLE ARITHMETIC" << endl;
    cout << num1 << "+" << num2 << "=" << add_double(num1, num2) << endl;
    cout << num1 << "-" << num2 << "=" << sub_double(num1, num2) << endl;
    cout << num1 << "*" << num2 << "=" << mult_double(num1, num2) << endl;

    //error handling for div by 0
    if(num2!=0)
    {
       cout << num1 << "/" << num2 << "=" << div_double(num1, num2) << endl; 
    }
    else
    {
        cout <<  "Division by 0 is not allowed" << endl;
    }
    cout << "the hypotenuse of " << num3 << " and " << num4 << " is " << hyp(num1, num2) << endl;

    return 0;
}