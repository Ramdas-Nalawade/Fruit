/*6. Create a class ComplexNumber with data members real, imaginary. Create  
AcceptComplexNumber() and the display function. Create the object of this class in main 
method and invoke all the methods in that class.*/

#include <iostream>
using namespace std;

class ComplexNumber
{
    private:
        int real, imaginary;
    public: 
        void accept(int real, int imaginary)
        {
            this->real = real;
            this->imaginary = imaginary;
        }
        void display()
        {
            cout<<"Real = "<<real<<"   "<<"Imaginary = "<<imaginary<<endl;
        }
};

int main()
{
    ComplexNumber c1;
    c1.accept(5, 7);
    c1.display();
    cout<<"-------------------------"<<endl;
    ComplexNumber c2;
    c2.accept(15, 7);
    c2.display();
}