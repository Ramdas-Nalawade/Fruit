/*2. Create a class Date with data members as dd, mm, yy. Create AcceptDate function. Also 
add the display function. Create the object of this class in main method and invoke all the
methods in that class. */

#include <iostream>
using namespace std;

class Date
{
    private:
        int dd, mm, yy;
    public:
        void accept(int dd, int mm, int yy)
        {
            this->dd = dd;
            this->mm = mm;
            this->yy = yy;
        }
        void display()
        {
            cout<<"Date entered is: "<<dd<<"-"<<mm<<"-"<<yy<<endl;
        }
};

int main()
{
    Date d1;
    d1.accept(18, 9, 2023);
    d1.display();
    cout<<"*****************************"<<endl;
    Date d2;
    d2.accept(20, 1, 1999);
    d2.display();
}