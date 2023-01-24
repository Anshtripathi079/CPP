#include<iostream>
using namespace std;
class A{
    public:
    int x;
    A(){
        x = 3;
    }
    void show(){
        cout<<x;
    }
};
class B:public A{
   public:
   int a;
   B (){
    a = 5;
   }
   void out(){
    cout<<a<<endl;
    cout<<x<<endl;
    show();
   }
};
int main()
{
 B o1;
 o1.out();
}