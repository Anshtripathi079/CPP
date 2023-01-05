#include <iostream>
#include <string>
using namespace std;
class concat
{
    string s;

public:
    void getdata(){
        cin>>s;
    }
    void showdata(){
        cout<<s<<endl;
    }
    concat operator +(concat obj){
        concat t;
        t.s = s+obj.s;
        return t;
    }
};
int main(){
    concat c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3 = c1+c2;
    c3.showdata();
    cout<<"Ansh Tripathi"<<" "<<"Enrollment no. 079";
}