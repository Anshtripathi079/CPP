#include <iostream>
using namespace std;

class first
{
public:
    void showf()
    {
        cout << "This is first class\n";
    }
};

class second
{
    first f;

public:
    second()
    {
        f.showf();
    }
};

int main()
{
    second s;
    cout<<"Ansh Tripathi"<<" "<<"Enrollment no. 07929802021";
}