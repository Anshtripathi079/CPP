// A friend class can access private and protected members of other classes in which it is 
// declared as a friend. It is sometimes useful to allow a particular class to access 
// private and protected members of other classes. 
// For example, a LinkedList class may be allowed to access private members of Node.

// We can declare a friend class in C++ by using the friend keyword.


#include<iostream>
using namespace std;
class A
{
private:
    int x;
public:
    A(){
        x = 10;
    }    
friend class B;  //friend class decleration    
};
class B{
    public:
    void showdata(A &obj){
        cout<<obj.x;
    }
};

int main()
{
 A obj;
 B obj2;
 obj2.showdata(obj);
}