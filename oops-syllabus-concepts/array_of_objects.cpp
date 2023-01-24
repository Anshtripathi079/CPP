#include<iostream>
using namespace std;
class A{
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
 A obj[3];
 obj[0].getdata(5);
 obj[1].getdata(6);
 obj[2].getdata(7);
 for(int i=0;i<3;i++){       //using loop
    obj[i].showdata();
 }
}