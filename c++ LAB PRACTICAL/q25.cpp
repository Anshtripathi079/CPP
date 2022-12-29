#include<iostream>
using namespace std;
class Acc{
    int accno;
    float bal;

    public:
    void getdata(){
        cout<<"Enter acc no.: ";
        cin>>accno;
        cout<<"enter the balance: ";
        cin>>bal;
    }
    void setdata(int accIn){
        accno = accIn;
        bal = 0;
    }
    void setdata(int accIn,int balIn){
        accno = accIn;
        bal = balIn;
    }
    void display(){
        cout<<"Account no. is: "<<accno<<endl;
        cout<<"Balance is: "<<bal<<endl;
    }
    void moneytransfer(Acc &acc,float amt);
};
void Acc::moneytransfer(Acc &acc,float amt){
    bal = bal - amt;
    acc.bal = acc.bal+amt;
}
int main(){
    int trans_money;
    Acc acc1,acc2,acc3;
    acc1.getdata();
    acc2.setdata(2);
    acc3.setdata(3,750.5);
    cout<<"Account information.. "<<endl;
    acc1.display();
    acc2.display();
    acc3.display();
    cout<<"How much money to transfer from acc3 to acc1: ";
    cin>>trans_money;
    acc3.moneytransfer(acc1,trans_money);
    cout<<"Updated information.. "<<endl;
    acc1.display();
    acc2.display();
    acc3.display();
    cout << "Name = Ansh Tripathi"<< endl << "Enrollnment no = 07929802021"<<endl;
}