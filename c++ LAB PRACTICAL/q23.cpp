#include<bits/stdc++.h>
using namespace std;
class counter{
    public:
    static int count;
    counter(){
        count++;
        cout<<"Object no : "<<count<<endl;
    }
};
int counter :: count;
int main(){
    counter o1;
    counter o2;
    cout << "Name = Ansh Tripathi"<< endl << "Enrollnment no = 07929802021"<<endl;
}
