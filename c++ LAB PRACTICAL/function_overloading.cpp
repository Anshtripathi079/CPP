#include <iostream>
using namespace std;
class Cal
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int add(int a, int b, int c)
    {
        return a + b + c;
    }
};
int main(void)
{
    Cal C;
    cout << C.add(10, 20) << endl;
    cout << C.add(12, 20, 23)<<endl;
    cout<<"Name = Ansh Tripathi"<<endl<<"enrollment no = 07929802021"<<endl;
    return 0;
}