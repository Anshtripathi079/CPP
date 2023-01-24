// Virtual base classes are used in virtual inheritance in a way of preventing multiple 
// “instances” of a given class appearing in an inheritance hierarchy when using multiple 
// inheritances. 

#include<iostream>
using namespace std;
class A{
   public:
    int a;
    A(){
        a = 1;
    }
};
class B:public virtual A{  // way to inherit A as virtual class
   public:
   int b;
   B(){
    b=2;
   }
};
class C:public virtual A{
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
    cout<<a<<endl;   // here we have seen in multipath code that it was showing ambiguity error but now after inheriting virtually it is not showing any error and only have one instance of a.
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