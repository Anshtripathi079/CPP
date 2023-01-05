#include<iostream>
#include<string>
using namespace std;
class person{
 private:
    string name;
    string sex;
    int age;
 public:
    void readdata(){
        cout<<"Name ? ";
        cin>>name;
        cout<<"Sex ? ";
        cin>>sex;
        cout<<"Age ? ";
        cin>>age;
    }
    void displaydata(){
        cout<<"Name: "<<name<<endl;
        cout<<"Sex: "<<sex<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

class student: public person{
 private:
  int rollno;
  string branch;
 public:
   void readdata(){
    person::readdata();
    cout<<"Roll no. ? ";
    cin>>rollno;
    cout<<"branch ? ";
    cin>>branch;
   }
   void displaydata(){
    cout<<"Roll no.: "<<rollno<<endl;
    cout<<"Branch: "<<branch<<endl;
   }   
};
class exam: public student{
 protected:
  int sub1marks;
  int sub2marks;
 public:
   void readdata(){
    student::readdata();
    cout<<"Marks scored in subject 1 ? ";
    cin>>sub1marks;
    cout<<"Marks scored in subject 2 ? ";
    cin>>sub2marks;
   }
    void displaydata(){
    student::displaydata();
    cout<<"Marks scored in subject 1: "<<sub1marks<<endl;
    cout<<"Marks scored in subject 2: "<<sub2marks<<endl;
    cout<<"Total marks scored: "<<totalmarks()<<endl;
   }  
   int totalmarks(){
    return sub1marks + sub2marks;
   }
};

int main(){
    exam annual;
    cout<<"Enter data for student ... "<<endl;
    annual.readdata();
    cout<<"Student details ... "<<endl;
    annual.displaydata();
}