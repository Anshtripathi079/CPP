#include<iostream>
using namespace std;
void swapValues(int a,int b){
int temp = a;
a = b;
b = temp;
}
int main(){
    int a=5,b=10;
    cout<<"before swap "<<endl;
    cout<<a<<" "<<b<<endl;
    swapValues(a,b);
    cout<<"after swap "<<endl;
    cout<<a<<" "<<b;
}