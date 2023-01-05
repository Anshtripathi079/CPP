#include<iostream>
using namespace std;
inline int sqrt(int n){
    return n*n;
}
int main(){
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    cout<<"Square is "<<sqrt(n);
}