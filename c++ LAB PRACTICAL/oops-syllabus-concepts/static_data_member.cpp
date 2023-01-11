// Static data members are class members that are declared using static keywords. 
// A static member has certain special characteristics. 
// These are:

// Only one copy of that member is created for the entire class and is shared by all the objects of that class, no matter how many objects are created.
// It is initialized before any object of this class is being created, even before main starts.
// It is visible only within the class, but its lifetime is the entire program


#include<iostream>
using namespace std;
class A{
    static int count;
    public:
    A(){
        count++;
    }
    void showcount(){
        cout<<count<<endl;
    }
};
int A::count;
int main()
{
 A o1;
 o1.showcount();
 A o2;
 o2.showcount();
}