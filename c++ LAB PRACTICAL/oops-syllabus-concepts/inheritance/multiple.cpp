#include<iostream>
using namespace std;
class A{
  public:
  int x;
  A(){
    x = 10;
  }
};
class B{
 public:
 int y;
 B(){
    y = 6;
 }
};
class C:public A,public B{
    public:
    int z;
    C(){
        z = 3;
    }
    void show(){
        cout<<x<<endl;
        cout<<y<<endl;
        cout<<z<<endl;
    }
};
int main()
{
 C o1;
 o1.show();
}