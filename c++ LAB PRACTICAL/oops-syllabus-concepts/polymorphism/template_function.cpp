#include<iostream>
using namespace std;

template<class T>
T add(T a,T b){
    return a+b;
}

int main()
{
 int a = 5;
 int b = 6;
 cout<<add(a,b);
}