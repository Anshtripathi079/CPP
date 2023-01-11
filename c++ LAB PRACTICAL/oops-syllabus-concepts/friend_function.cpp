// Friend Function
// Like a friend class, a friend function can be granted special access to private and
// protected members of a class in C++. They are the non-member functions that can access and 
// manipulate the private and protected members of the class for they are declared as friends.

// A friend function can be:

// A global function
// A member function of another class

// 1. as global function
// #include<iostream>
// using namespace std;
// class A{
//   int x;
//   public:
//   A(){
//     x = 5;
//   }
//   friend void friendFunc(A &obj);
// };
// void friendFunc(A &obj){
//     cout<<obj.x<<endl;
// }
// int main()
// {
//  A o;
//  friendFunc(o);
// }



// 2. As a member function of other class 

// C++ program to create a member function of another class
// as a friend function
#include <iostream>
using namespace std;

class base; // forward definition needed
// another class in which function is declared
class anotherClass {
public:
	void memberFunction(base& obj);
};

// base class for which friend is declared
class base {
private:
	int private_variable;

protected:
	int protected_variable;

public:
	base()
	{
		private_variable = 10;
		protected_variable = 99;
	}

	// friend function declaration
	friend void anotherClass::memberFunction(base&);
};

// friend function definition
void anotherClass::memberFunction(base& obj)
{
	cout << "Private Variable: " << obj.private_variable
		<< endl;
	cout << "Protected Variable: " << obj.protected_variable;
}

// driver code
int main()
{
	base object1;
	anotherClass object2;
	object2.memberFunction(object1);

	return 0;
}
