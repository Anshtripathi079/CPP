#include<iostream>
using namespace std;
class def{
    public:
    int x,y;
   def(int a,int b){
    x = a;
    y = b;
   }
   void showdata(){
    cout<<x<<" "<<y<<endl;
   }
   };
int main(){
    def d(4,7);
    d.showdata();    
	cout << "Name = Ansh Tripathi"<< endl << "Enrollnment no = 07929802021"<<endl;
}
