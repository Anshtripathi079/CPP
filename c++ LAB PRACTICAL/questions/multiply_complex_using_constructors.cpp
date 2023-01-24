#include <iostream>  
using namespace std;  
  
class Complex {  
public:  
    int real; 
    int imaginary; 
  
    Complex()  
    {    
        real = 0;  
        imaginary = 0;  
    }  
    Complex(int r, int i)  
    {  
        real = r;   
        imaginary = i;  
    }  

    Complex mulComplexNumber(Complex C1, Complex C2)  
    {  
        Complex res1;
        res1.real = C1.real * C2.real;  
        res1.imaginary = C1.imaginary * C2.imaginary;   
        return res1;  
    }  
    
};  

int main()  
{  
    Complex C1(7, 6);  
    cout << "Complex number 1 : " << C1.real << " + i" << C1.imaginary << endl;    
    Complex C2(5, 3);  
    cout << "Complex number 2 : " << C2.real << " + i" << C2.imaginary << endl;  
  
    Complex C4;  
  
    C4 = C4.mulComplexNumber(C1, C2);  
    cout << "Product of complex number : " << C4.real << " + i" << C4.imaginary;  
  
    cout << endl; 
	cout<<"Name: Ansh Tripathi"<<endl<<"Enrollment no: 07929802021"<<endl;
    return 0;	 
}
