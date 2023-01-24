#include<bits/stdc++.h>
#include<string>

using namespace std;

class CAccount
{
        int accountNumber;
        string nm, acctype;
        float accountBalance;  
   public:
        CAccount(int acc_no, string name, string acc_type, float accountBal)  
        {
                accountNumber = acc_no;
                nm = name;
                acctype = acc_type;
                accountBalance = accountBal;
        }
        void func();
        void deposit();
        void withdraw();
        void display();
};
void CAccount::func(){
    if(acctype[0]=='D' || acctype[0]=='d'){
        deposit();
        }
        else{
        withdraw();
        }
        }
void CAccount::deposit()   
{
        int damt1;
        cout<<"\n Enter Deposit Amount = ";
        cin>>damt1;
        accountBalance+=damt1;
}
void CAccount::withdraw() 
{
        int wamt1;
        cout<<"\n Enter Withdraw Amount = ";
        cin>>wamt1;
        if(wamt1>accountBalance)
                cout<<"\n Cannot Withdraw Amount";
        accountBalance-=wamt1;
}
void CAccount::display()  
{
        cout<<"\n ----------------------";
        cout<<"\n Accout No. : "<<accountNumber;
        cout<<"\n Name : "<<nm;
        cout<<"\n Account Type : "<<acctype;
        cout<<"\n Balance : "<<accountBalance;  
}
int main()
{
        int acc_no;
        string name, acc_type;
        float accountBalanceance;
        cout<<"\n Enter Details: \n";
        cout<<"-----------------------";
        cout<<"\n Accout No. ";
        cin>>acc_no;
        cout<<"\n Name : ";
        cin>>name;
        cout<<"\n Account Type : ";
        cin>>acc_type;
        cout<<"\n Balance : ";
        cin>>accountBalanceance;
  
        CAccount b1(acc_no, name, acc_type, accountBalanceance);  
        b1.func();
        b1.display(); 
        cout<<"Name = Ansh Tripathi"<<endl<<"enrollment no = 07929802021"<<endl;
        return 0;
}