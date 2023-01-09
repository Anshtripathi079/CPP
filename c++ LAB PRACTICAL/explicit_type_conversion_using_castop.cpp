// Explicit type conversion
// Conversions that require user intervention to change the data type of one 
// variable to another, is called the explicit type conversion. 
// In other words, an explicit conversion allows the programmer to manually changes 
// or typecasts the data type from one variable to another type. 
// Hence, it is also known as typecasting. 
// Generally, we force the explicit type conversion to convert data from one type to 
// another because it does not follow the implicit conversion rule.

// The explicit type conversion is divided into two ways:

// 1. Explicit conversion using the cast operator
// 2. Explicit conversion using the assignment operator

// Cast operator: In C++ language, a cast operator is a unary operator who forcefully converts one type into another type.

// Let's consider an example to convert the float data type into int type using the cast operator of the explicit conversion in C++ language.

#include <iostream>  
using namespace std;  
int main ()  
{  
float f2 = 6.7;  
// use cast operator to convert data from one type to another  
int x = static_cast <int> (f2);  
cout << " The value of x is: " << x;  
return 0;  
}   

