#include <iostream>
using namespace std;
class load
{
    int a;
    public:
    void getdata(int x){
        a = x;
    }
    void showdata(){
        cout<<a<<endl;
    }
    void operator +=(load obj){
        a = a + obj.a;
    }
    void operator =(load obj){
        a = obj.a;
    }
};
int main(){
    load o1,o2,o3,o4;
    o1.getdata(5);
    o2.getdata(10);
    o2 += o1;
    o2.showdata();
    o3.getdata(3);
    o4 = o3;
    o4.showdata();
    cout<<"Ansh Tripathi"<<" "<<"Enrollment no. 07929802021";
}