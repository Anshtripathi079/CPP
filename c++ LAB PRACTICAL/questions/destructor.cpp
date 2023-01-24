#include<iostream>
using namespace std;

class demo
{
	int a;
	public:
		demo()
		{
			cout << "This is a constructor...."<<endl;
		}
    ~demo()
     {
	    cout << "This is a destructor...."<< endl;
	    cout<<"Name: Ansh Tripathi"<<endl<<"Enrollment no: 07929802021"<<endl;
     }
};
int main()
{
	demo d1;
    return 0;
}
