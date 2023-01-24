// in c++ there are two types of type conversion implicit and explicit .

/*The implicit type conversion is the type of conversion done automatically by the compiler 
without any human effort. It means an implicit conversion automatically converts one data 
type into another type based on some predefined rules of the C++ compiler. 
Hence, it is also known as the automatic type conversion.*/

//Order of the typecast in implicit conversion
// The following is the correct order of data types from lower rank to higher rank:

// bool -> char -> short int -> int -> unsigned int -> long int -> unsigned long int -> long  long int -> float -> double -> long double  


#include <iostream>  
using namespace std;   
int main ()  
{  
// assign the integer value  
int num1 = 25;  
// declare a float variable  
float num2;  
// convert int value into float variable using implicit conversion  
num2 = num1;      
cout <<  " The value of num1 is: " << num1 << endl;  
cout <<  " The value of num2 is: " << num2 << endl;  
int num3;
float num4 = 45.67;
num3 = num4;    // yha compiler apne app float value 45.67 ko int me convert krke num3 me assign krdega as 45.
cout<<" The value of num3 is: " << num3 << endl; 
cout<<" The value of num4 is: " << num4 << endl; 
return 0;     
}  