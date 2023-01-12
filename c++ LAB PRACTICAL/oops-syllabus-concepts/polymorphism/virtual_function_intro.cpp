// as we have seen in our previous program(pointer to derived class) that if we are pointing to a 
// object through a pointer of the base class and if we try to use a function with same name
// in both the classes then the base class function will be called even though the pointer is 
// pointing to the derived class. TO overwrite this behaviour we use virtual functions . in this 
// case we will make the base class display() function as virtual so that the derived class 
// function is called when we call display() function through the pointer.

#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base=1;
        virtual void display(){
            cout<<"1 Dispalying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
            int var_derived=2;
            void display(){
                cout<<"2 Dispalying Base class variable var_base "<<var_base<<endl;
                cout<<"2 Dispalying Derived class variable var_derived "<<var_derived<<endl;
            }
};

int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    return 0;
}