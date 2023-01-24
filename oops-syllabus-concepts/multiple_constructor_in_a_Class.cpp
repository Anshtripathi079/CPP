#include<iostream>
using namespace std;
class A{
  int a,b;
  public:
     A(){
        a = 5;
        b = 5;
     }
     A(int x,int y){
        a = x;
        b = y;
     }
     A(A &obj){
        a = obj.a;
        b = obj.b;
     }
     void showdata();
};
void A::showdata(){
    cout<<a<<endl;
    cout<<b<<endl;
}
int main()
{
 A o1;
 o1.showdata();
 A o2(o1);
 A o3(2,3);
 o2.showdata();
 o3.showdata();
}