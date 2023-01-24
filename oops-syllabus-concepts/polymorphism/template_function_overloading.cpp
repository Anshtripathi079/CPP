#include<iostream>
using namespace std;

template<class T>
T sum(T a,T b){
    return a+b;
}

template<class T,class X>
X sum(T a,T b,X c){
    return a+b+c;
}

int main()
{
 int a = 5,b = 6;
 float c = 7.50;
 cout<<sum(a,b)<<endl;
 cout<<sum(a,b,c);
}