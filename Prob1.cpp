/*1:Write a program to create student class with data members rollno, marks1,mark2,mark3.
Accept data (acceptInfo()) and display  using display member function.
Also display total,percentage and grade.
*/

#include <iostream>
using namespace std;

class Student
{
    private:
        int rollno, marks1, marks2, marks3;
    public:
        void accept(int rollno, int marks1, int marks2, int marks3)
        {
            this->rollno = rollno;
            this->marks1 = marks1;
            this->marks2 = marks2;
            this->marks3 = marks3;
        }
        void display()
        {
            cout<<"roll no: "<<rollno<<endl;
            cout<<"Marks1: "<<marks1<<endl;
            cout<<"Marks2: "<<marks2<<endl;
            cout<<"Marks3: "<<marks3<<endl;
        }
};

int main()
{
    Student s1;
    s1.accept(1, 63, 84, 90);
    s1.display();
    cout<<"---------------------"<<endl;
    Student s2;
    s2.accept(2, 72, 80, 94);
    s2.display();
}