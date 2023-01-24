#include <iostream>
using namespace std;

class Box {
   public:
   int a;
      void getdata(int x){
        a = x;
      }
      void showdata(){
        cout<<a<<endl;
      }
};
int main() {
   Box* myBoxArray = new Box[4];
   myBoxArray[0].getdata(5);
   myBoxArray[1].getdata(6);
   myBoxArray[2].getdata(7);
   myBoxArray[3].getdata(8);

   myBoxArray[0].showdata();
   myBoxArray[1].showdata();
   myBoxArray[2].showdata();
   myBoxArray[3].showdata();

   delete [] myBoxArray; // Delete array

   return 0;
}