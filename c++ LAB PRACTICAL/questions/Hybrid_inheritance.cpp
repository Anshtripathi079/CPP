#include<iostream>
#include<string>
using namespace std;
class person{
 private:
    string name;
    string sex;
    int age;
 public:
    void readperson(){
        cout<<"Name ? ";
        cin>>name;
        cout<<"Sex ? ";
        cin>>sex;
        cout<<"Age ? ";
        cin>>age;
    }
    void displayperson(){
        cout<<"Name: "<<name<<endl;
        cout<<"Sex: "<<sex<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class sports: public virtual person{
 private:
  string name;
  int score;
 public:
   void readdata(){
    cout<<"Game Played ? ";
    cin>>name;
    cout<<"Game score ? ";
    cin>>score;
   }
   void displaydata(){
    cout<<"Sports played: "<<name<<endl;
    cout<<"Game score: "<<score<<endl;
   }
   int sportscore(){
    return score;
   }
};
class student: public virtual person{
 private:
  int rollno;
  string branch;
 public:
   void readdata(){
    cout<<"Roll no. ? ";
    cin>>rollno;
    cout<<"branch ? ";
    cin>>branch;
   }
   void display_data(){
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
    cout<<"Marks scored in subject 1 ? ";
    cin>>sub1marks;
    cout<<"Marks scored in subject 2 ? ";
    cin>>sub2marks;
   }
    void displaydata(){
    // student::display_data();
    cout<<"Marks scored in subject 1: "<<sub1marks<<endl;
    cout<<"Marks scored in subject 2: "<<sub2marks<<endl;
    cout<<"Total marks scored: "<<totalmarks()<<endl;
   }  
   int totalmarks(){
    return sub1marks + sub2marks;
   }
};
class result: public exam, public sports
{
 private:
  int total;
  public:
    void readdata(){
        readperson();
        student::readdata();
        exam::readdata();
        sports::readdata();
    }
    void displaydata(){
        displayperson();
        student::display_data();
        exam::displaydata();
        sports::displaydata();
        cout<<"Overall performance, (exam+sports) : "<<percentage()<<"%";
    }
    int percentage(){
        return (exam::totalmarks() + sports::sportscore())/3;
    }
};
int main(){
    result student;
    cout<<"Enter data for student ... "<<endl;
    student.readdata();
    cout<<"Student details ... "<<endl;
    student.displaydata();
    cout<<"Ansh Tripathi"<<" "<<"Enrollment no. 07929802021";
}