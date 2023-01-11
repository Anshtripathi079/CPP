#include<iostream>
using namespace std;
class A
{
 int x;
 public:
 void getdata(int x){
    this->x = x;
 }
 void showdata(){
    cout<<x<<endl;
 }
};
int main()
{
// static
A obj1;
obj1.getdata(5);
obj1.showdata();
// dynamic 
A *obj2 = new A;
obj2->getdata(6);      // isme -> ye use krte h wrna lag lag jaenge.
obj2->showdata();
}