#include <iostream>
using namespace std;
class complex{
public:
    int x, y;
    complex(int a){
        x = a;
        y = a;
    }
    complex(int a, int b){
        x = a;
        y = b;
    }
    void sub(complex c1, complex c2){
        x = c1.x - c2.x;
        y = c1.y - c2.y;
    }
    void show(){
        cout << x << " + i" << y << endl;
    }
};
int main(){
    complex o1(3, 5);
    complex o2(4, 4);
    complex o3(0);
    o3.sub(o1, o2);
    o1.show();
    o2.show();
    o3.show();
    cout << "Name = Ansh Tripathi"<< endl << "Enrollnment no = 07929802021"<<endl;
}
