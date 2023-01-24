#include<iostream>
using namespace std;
class complex
{
    public:
    int real, img;
    complex diff(complex c1,complex c2)
    {
        complex temp;
        temp.real=c1.real - c2.real;
        temp.img = c1.img-c2.img;
        return temp;
    }
    void getdata(int r, int i)
    {
        real=r;
        img=i;
    }
    void print()
    {
        cout<<real<<" + i"<<img<<endl;;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.getdata(5,7);
    c2.getdata(1,2);
    c3=c3.diff(c1,c2);
    c3.print();
    cout<<"Name = Ansh Tripathi"<<endl<<"Enrollment no = 07929802021"<<endl;
}
