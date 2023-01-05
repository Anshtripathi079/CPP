#include <iostream>
#include <string>
using namespace std;
class student
{
protected:
  int rollno;
  string branch;

public:
  void readstudentdata()
  {
    cout << "Roll no. ? ";
    cin >> rollno;
    cout << "Branch studying ? ";
    cin >> branch;
  }
  void displaystudentdata()
  {
    cout << "Roll no.: " << rollno << endl;
    cout << "Branch: " << branch << endl;
  }
};
class Internalexam : virtual public student
{
protected:
  int sub1marks;
  int sub2marks;

public:
  void readata()
  {
    cout << "Marks scored in subject 1 ? ";
    cin >> sub1marks;
    cout << "Marks scored in subject 2 ? ";
    cin >> sub2marks;
  }
  void displaydata()
  {
    cout << "Internal marks scored in subject 1: " << sub1marks << endl;
    cout << "Internal marks scored in subject 2: " << sub1marks << endl;
    cout << "Internal total marks scored: " << totalmarks() << endl;
  }
  int totalmarks()
  {
    return sub1marks + sub2marks;
  }
};
class Externalexam : virtual public student
{
protected:
  int sub1marks;
  int sub2marks;
  public:
  void readata()
  {
    cout << "Marks scored in subject 1 ? ";
    cin >> sub1marks;
    cout << "Marks scored in subject 2 ? ";
    cin >> sub2marks;
  }
  void displaydata()
  {
    cout << "Internal marks scored in subject 1: " << sub1marks << endl;
    cout << "Internal marks scored in subject 2: " << sub1marks << endl;
    cout << "Internal total marks scored: " << totalmarks() << endl;
  }
  int totalmarks()
  {
    return sub1marks + sub2marks;
  }
};
class result: public Internalexam, public Externalexam{
  private:
   int total;
  public:
   int totalmarks(){
    return Internalexam::totalmarks() + Externalexam::totalmarks();
   }
};
int main(){
  result student1;
  cout<<"Enter data for student1 ... "<<endl;
  student1.readstudentdata();
  cout<<"Enter internalmarks ... "<<endl;
  student1.Internalexam::readata();
  cout<<"Enter externalmarks ... "<<endl;
  student1.Externalexam::readata();
  cout<<"Student Details... "<<endl;
  student1.displaystudentdata();
  student1.Internalexam::displaydata();
  student1.Externalexam::displaydata();
  cout<<"Total marks = "<<student1.totalmarks();
}