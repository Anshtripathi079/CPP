#include <iostream>
using namespace std;
class A
{
public:
    int x;
    A()
    {
        x = 4;
    }
};
class B : public A
{
public:
    int y;
    B()
    {
        y = 5;
    }
    void show()
    {
        cout << x << endl;
        cout << y << endl;
    }
};
class C : public A
{
public:
    int z;
    C()
    {
        z = 6;
    }
    void show()
    {
        cout << x << endl;
        cout << z << endl;
    }
};
class D : public A
{
public:
    int a;
    D()
    {
        a = 7;
    }
    void show()
    {
        cout << x << endl;
        cout << a << endl;
    }
};
int main()
{
    B o1;
    C o2;
    D o3;
    o1.show();
    o2.show();
    o3.show();
}