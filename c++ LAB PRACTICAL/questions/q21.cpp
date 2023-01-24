#include<iostream>
using namespace std;
class counter{
    public:
    static int count;
    counter(){
        count++;
        cout<<"object count is "<<count<<endl;
    }
};
int counter::count;
int main(){
    counter c1;
    counter c2;
    cout<<"Name = Ansh Tripathi"<<endl<<"Enrollment no = 07929802021"<<endl;
}
