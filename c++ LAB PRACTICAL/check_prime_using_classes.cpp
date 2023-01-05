#include<iostream>
using namespace std;
class check{
int n;
public:
void getdata(int x){
    n = x;
}
bool checkprime(){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
};
int main(){
    check c1;
    bool x;
    c1.getdata(10);
    x = c1.checkprime();
    if(x){
        cout<<"It is a prime no."<<endl;
    }
    else{
        cout<<"Not prime"<<endl;
    }
}