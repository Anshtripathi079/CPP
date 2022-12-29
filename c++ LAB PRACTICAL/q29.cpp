#include<iostream>
using namespace std;
class def{
    public:
    int x,y;
   def(def &o1){
    x = o1.x;
    y = o1.y;
   }
   def(){
    x = 5;
    y = 8;
   }
   void showdata(){
    cout<<x<<" "<<y<<endl;
   }
   };
int main(){
    def o2;
    def o3(o2);
    o2.showdata();
    o3.showdata();    
	cout << "Name = Ansh Tripathi"<< endl << "Enrollnment no = 07929802021"<<endl;
}
