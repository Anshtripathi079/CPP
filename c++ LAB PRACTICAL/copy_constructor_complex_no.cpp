#include <iostream>
using namespace std;
  
class Complex {
private:
    int i, r;
  
public:
    Complex(int x1, int y1)
    {
        i = x1;
        r = y1;
    }
 
    Complex(const Complex& p1)
    {
        i = p1.i;
        r = p1.r;
    }
   void showdata(){
    cout<<r<<"+i"<<i<<endl;
   }
};
  
int main()
{
    Complex p1(10, 15); 
    Complex p2 = p1; 
  
    p1.showdata();
    p2.showdata();
    cout<<"Name: Ansh Tripathi"<<endl<<"Enrollment no: 07929802021"<<endl;
    return 0;
}