#include <iostream>
using namespace std;
class Meter
{
private:
    float length;

public:
    Meter()
    {
        length = 0.0;
    }
    Meter(float Initlength)
    {
        length = Initlength / 100.0; // cm to m
    }
    operator float()
    {
        float Lengthcms;
        Lengthcms = length * 100.0;
        return (Lengthcms);
    }
    void Getlength()
    {
        cout << "\n Enterlength (in meters): ";
        cin >> length;
    }
    void showlength()
    {
        cout << "Length (in meter) = " << length;
    }
};
int main()
{
    Meter meter1;
    float length1;
    cout << "Enter length (in cms): ";
    cin >> length1;
    meter1 = length1;
    meter1.showlength();
    Meter meter2;
    float length2;
    meter2.Getlength();
    length2 = meter2;
    cout << "Length (in cms) = " << length2<<endl;
    cout<<"Ansh Tripathi"<<" "<<"Enrollment no. 07929802021";
}