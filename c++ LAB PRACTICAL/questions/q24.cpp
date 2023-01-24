#include<iostream>
using namespace std;
class Distance{
    public:
    float feet;
    float inches;
    
    void init(float ft,float in){
        feet = ft;
        inches = in;
    }
    void read(){
        cout<<"Enter feet: "<<endl;
        cin>>feet;
        cout<<"Enter inches: "<<endl;
        cin>>inches;
    }
    void show(){
        cout<<feet<<"-"<<inches<<'\"';
    }
    void add(Distance d1,Distance d2){
        feet = d1.feet + d2.feet;
        inches = d1.inches + d2.inches;
        if(inches>=12.0){
            feet = feet+1.0;
            inches=inches-12.0;
        }
    }
};
int main(){
   Distance d1,d2,d3;
   d2.init(11.0,6.25);
   d1.read();
   cout<<"d1= ";
   d1.show();
   cout<<"\nd2 = ";
   d2.show();
   d3.add(d1,d2);
   cout<<"\nd3 = d1+d2 = ";
   d3.show();
   cout<<endl;
   cout << "Name = Ansh Tripathi"<< endl << "Enrollnment no = 07929802021"<<endl;
}
