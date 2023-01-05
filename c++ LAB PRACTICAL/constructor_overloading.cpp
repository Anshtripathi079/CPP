#include<iostream>
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
     void operator ++(){
         ++a;
    }
    void operator ++(int){
         a++;
    }
};
int main(){
    load o1;
    o1.getdata(5);
    o1.showdata();
    o1++;
    o1.showdata();
    o1++;
    o1.showdata();
    ++o1;
    o1.showdata();
    cout<<"Ansh Tripathi"<<" "<<"Enrollment no. 07929802021";
}

