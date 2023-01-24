#include<iostream>
using namespace std;
class a{
 int arr[5];
    public:
    void getdata(){
        for(int i=0;i<5;i++){
            cin>>arr[i];
        }
    }
    void showdata(){
        for(int i=0;i<5;i++){
            cout<<arr[i]<<endl;
        }
    }

};
int main()
{
 a obj;
 obj.getdata();
 obj.showdata();
}