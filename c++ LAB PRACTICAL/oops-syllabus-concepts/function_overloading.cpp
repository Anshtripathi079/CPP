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