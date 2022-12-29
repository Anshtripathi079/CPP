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
    complex mul(complex c1,complex c2)
    {
        complex temp;
        temp.real = (c1.real * c2.real) - (c1.img * c2.img);
        temp.img= (c1.real *c2.img) + (c2.real * c1.img);
        // c3.real = real+c2.real;
        // c3.img = img+c2.img;
        return temp;
    }
    void print()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
}; 
int main()
{
    complex c1,c2,c3;
    c1.getdata(6,5);
    c2.getdata(3,3);
    c3 = c1.mul(c1,c2);
    c3.print();
	cout<<"Name = Ansh Tripathi"<<endl<<"Enrollment no = 07929802021"<<endl;
}
