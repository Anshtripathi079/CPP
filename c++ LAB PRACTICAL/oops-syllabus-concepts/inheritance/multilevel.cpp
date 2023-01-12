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
    b = 2;
  }
};
class C:public B{
  public:
   int c;
   C(){
    c = 3;
   }
   void show(){
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
   }
};
int main()
{
 C o1;
 o1.show();
}