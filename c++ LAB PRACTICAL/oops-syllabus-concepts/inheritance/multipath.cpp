#include<iostream>
using namespace std;
class A{
   public:
    int a;
    A(){
        a = 1;
    }
};
class B:public A{
   public:
   int b;
   B(){
    b=2;
   }
};
class C:public A{
   public:
   int c;
   C(){
    c=3;
   }
};
class D:public B,public C{
    public:
   int d;
   D(){
    d=4;
   }
   void show(){
    cout<<B::a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
   }
};
int main()
{
 D o1;
 o1.show();
}