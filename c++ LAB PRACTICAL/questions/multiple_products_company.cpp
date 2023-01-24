#include<iostream>
#include<string>
using namespace std;
class publication{
 private:
  string title;
  float price;
 public:
  void getdata(){
    cout<<"Enter title: ";
    cin>>title;
    cout<<"Enter price: ";
    cin>>price;
  }
  void display(){
    cout<<"Title = "<<title<<endl;
     cout<<"Price = "<<price<<endl;
  }
};
class sales{
    private:
    int publishsales[3];
    public:
    void getdata(){
         int i;
    for(int i=1;i<=3;i++){
        cout<<"Enter Sales of "<<i<<" Month: ";
        cin>>publishsales[i];
       
    }
    }
    void display(){
        int i;
    int totalsales = 0;
    for(int i=1;i<=3;i++){
        cout<<"Sales of "<<i<<" Month = "<<publishsales[i]<<endl;
        totalsales += publishsales[i];
    }
    cout<<" Total Sales = "<<totalsales<<endl;
    }
};

class book: public publication,public sales{
    private:
    int pages;
    public:
    void getdata(){
        publication::getdata();
        cout<<"Enter number of pages: ";
        cin>>pages;
        sales::getdata();
    }
    void display(){
        publication::display();
        cout<<"Number of pages = "<<pages<<endl;
        sales::display();
    }
};
class tape: public publication,public sales{
    private:
    int playtime;
    public:
    void getdata(){
        publication::getdata();
        cout<<"Enter playing time in minute: ";
        cin>>playtime;
        sales::getdata();
    }
    void display(){
        publication::display();
        cout<<"Playing time in minute = "<<playtime<<endl;
        sales::display();   
    }
};
class pamphlet: public publication{
};
class notice: public pamphlet{
  string whom;
  public:
  void getdata(){
    pamphlet::getdata();
    cout<<"Enter type of distributor: ";
    cin>>whom;
  }
  void display(){
    pamphlet::display();
    cout<<"Type of Distributor = "<<whom<<endl;
  }
};
int main()
{
    book book1;
    tape tape1;
    pamphlet pamp1;
    notice notice1;
    cout<<"Enter Book publication data ... "<<endl;
    book1.getdata();
    cout<<"Enter Tape publication data ... "<<endl;
    tape1.getdata();
    cout<<"Enter pamphlet publication data ... "<<endl;
    pamp1.getdata();
    cout<<"Enter notice publication data ... "<<endl;
    notice1.getdata();
    cout<<"Book Publication data ... "<<endl;
    book1.display();
    cout<<"Tape Publication data ... "<<endl;
    tape1.display();
    cout<<"Pamphlet Publication data ... "<<endl;
    pamp1.display();
    cout<<"Notice Publication data ... "<<endl;
    notice1.display();
    cout<<"Ansh Tripathi"<<" "<<"Enrollment no. 07929802021";
}