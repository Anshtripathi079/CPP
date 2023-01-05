#include <iostream>  
using namespace std;  
 class A {  
   public:  
   float salary = 60000;   
 };  
   class B: public A {  
   public:  
   float bonus = 5000;    
   };       
int main(void) {  
     B p1;  
     cout<<"Salary: "<<p1.salary<<endl;    
     cout<<"Bonus: "<<p1.bonus<<endl;  
     cout<<"Name = Ansh Tripathi"<<endl<<"enrollment no = 07929802021"<<endl;  
    return 0;  
}  