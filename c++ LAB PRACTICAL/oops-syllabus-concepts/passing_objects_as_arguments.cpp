#include<iostream>
using namespace std;
class A{
   int x;
   int y;
   public:
   void getdata(int x,int y){
     this->x = x;
     this->y = y;
   }
   void showdata(){
    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;
   }
   A sum(A obj){
    A temp;
    temp.x = x + obj.x;
    temp.y = y + obj.y;
    return temp;
   }
};
int main()
{
 A o1,o2,o3;
 o1.getdata(5,6);
 o2.getdata(10,11);
 o3 = o1.sum(o2);
 o3.showdata();
}
