# include<iostream>
using namespace std;
class complex{
    public:
    float real,img;
    void getdata(int r,int i)
    {
        real=r;
        img=i;
    }
    void diff(complex c1,complex c2)
    {
        real= c1.real - c2.real;
        img= c1.img- c2.img;
    }
    void print()
    {
        cout<<real<<" + i"<<img<<endl;
    }
}; 
int main()
{
    
    complex c1,c2,c3;
    c1.getdata(6,2);
    c2.getdata(4,1);
    c3.diff(c1,c2);
    c3.print();
    cout<<"Name = Ansh Tripathi"<<endl<<"Enrollment no = 07929802021"<<endl;
}
