//Complex.cpp
/*

*/
#include<iostream>
class Complex
{
private:
    /* data */
public:
    Complex(){
        real=0;
        imag=0;
    }
};
compllex(double r,double i):real(r),imag(i){}

Complex::Complex(/* args */)
{
}

complex add (complex obj)
{
    complex ans;
    ans.real=this->real+obj.real;
    ans.imag=this->imag+obj.imag;
    return ans;
}
void print()
{
    std::cout<<"Real part: "<<real<<" Imaginary part: "<<imag<<std::endl;
}
int main(){
    complex a(1,2,3,4);
    complex b(5,6,7,8);
    complex c=a.add(b);
    a.print();
    b.print();
    c.print();
    return 0;
}

private:
    double real, imag;

public:
    Complex(double r, double i) : real(r), imag(i) {}
    
    Complex operator+(const Complex& obj) const {
        return Complex(real + obj.real, imag + obj.imag);
    }
    
    Complex operator-(const Complex& obj) const {
        return Complex(real - obj.real, imag - obj.imag);
    }
    
    Complex operator*(const Complex& obj) const {
        return Complex(real * obj.real - imag * obj.imag, 
                      real * obj.imag + imag * obj.real);
    }
    
    friend std::ostream& operator<<(std::ostream& os, const Complex& c) {
        os << c.real << " + " << c.imag << "i";
        return os;
    }



    Complex conjugate() const {
        return Complex(real, -imag);
    }

complex(double r, double i) : real(r), imag(i) {}
    Complex(const Complex& other) : real(other.real), imag(other.imag) {}   
Complex& operator=(const Complex& other) {
        if (this != &other) {
            real = other.real;
            imag = other.imag;
        }
        return *this;
    }
    complex operator+(const complex& obj) const {
        complex ans;
        ans.real = this->real + obj.real;
        ans.imag = this->imag + obj.imag;
        return ans;
    }
    // first include #include<cmath> for sqrt function 
    //beaucause of encapsulation any private data member of an object is not accessible by an external function. this rule can be defied by declaring that function as a friend of the class.
    //by using a friend keyword in front of the function header and declaring it inside the class body.
    //a friend function can access private and protected members of the class in which it is declared as a friend.
    //without using friend we cannot overload insertion(<<) and extraction(>>) operators.
    /*
    ╔════════════════════════════════════════╗
    ║                                        ║
    ║          ┌─────────────────┐           ║
    ║          │                 │           ║      (cout<<)                 |
    ║          │    MONITOR      │           ║                               |
    ║          │                 │           ║
    ║          │  ┌───────────┐  │           ║
    ║          │  │           │  │           ║
    ║          │  │  SCREEN   │  │           ║
    ║          │  │           │  │           ║
    ║          │  └───────────┘  │           ║
    ║          │        ▲        │           ║
    ║          └───────┼─────────┘           ║
    ║                  │                     ║
    ║       ╔══════════╩═══════════╗         ║
    ║       ║  KEYBOARD   MOUSE    ║         ║      (cin>>)
    ║       ║   [▭▭▭▭]   [●]   ║          ║
    ║       ╚══════════════════════╝         ║
    ║                                        ║
    ║         CPU / MOTHERBOARD              ║
    ║    [████████████████████████]          ║
    ║                                        ║
    ╚════════════════════════════════════════╝
    */