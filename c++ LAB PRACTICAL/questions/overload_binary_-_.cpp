#include <iostream>
class Complex {
 private:
  int real;
  int imag;

 public:
  Complex(int real, int imag) : real(real), imag(imag) {}

  friend Complex operator-(const Complex& lhs, const Complex& rhs) {
    return Complex(lhs.real - rhs.real, lhs.imag - rhs.imag);
  }
  void Print() const {
    std::cout << real << " + " << imag << "i" << std::endl;
  }
};
int main() {
  Complex c1(1, 2);
  Complex c2(3, 4);
  Complex c3 = c1 - c2;
  c3.Print();  // Output: -2 + -2i

  return 0;
}
