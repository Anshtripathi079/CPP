#include <iostream>
using namespace std;
class employee{
char name[50];
int age;
char address[100];
public:
void getdata(){
 cin>>name>>age>>address;
}
void showdata(){
cout<<"name:"<<" "<<name<<" "<<"age:"<<" "<<age<<" "<<"address:"<<" "<<address<<endl;
}
};
int main(){
employee e1;
e1.getdata();
e1.showdata();
cout<<"\nName = Ansh Tripathi"<<endl<<"enrollment no = 07929802021"<<endl;
}