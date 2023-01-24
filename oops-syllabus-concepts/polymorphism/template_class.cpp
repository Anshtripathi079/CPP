#include<iostream>
using namespace std;

template<class T>
class A{
    T a;
    T b;
    public:
    A(){
        a = 5;
        b = 6;
    }
    T add(){
    return a+b;
    }
};

int main()
{
 A<int> o;
 cout<<o.add();
}