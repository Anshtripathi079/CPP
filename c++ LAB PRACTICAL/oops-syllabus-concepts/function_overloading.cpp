// Function overloading is a feature of object-oriented programming where two 
// or more functions can have the same name but different parameters. 
// When a function name is overloaded with different jobs it is called Function Overloading.
// In Function Overloading “Function” name should be the same and the arguments should be 
// different. Function overloading can be considered as an example of a polymorphism 
// feature in C++.

// function overloading with different no. of arguments.
#include<iostream>
using namespace std;
class A{
 public:
 int a,b;
    void getdata(int x){
       a = x;
    }
    void getdata(int x,int y){
        a = x;
        b = y;
    } 
    void showdata(){
        cout<<a<<endl;
        cout<<b<<endl;
    }
};
int main()
{
 A obj1;
 obj1.getdata(5);
 cout<<obj1.a<<endl;
 obj1.getdata(6,10);
 obj1.showdata();
}

// function overloading with different type of arguments.

#include <iostream>
// using namespace std;
 
 
// void add(int a, int b)
// {
//   cout << "sum = " << (a + b);
// }
 
// void add(double a, double b)
// {
//     cout << endl << "sum = " << (a + b);
// }
 
// // Driver code
// int main()
// {
//     add(10, 2);
//     add(5.3, 6.2);
 
//     return 0;
// }