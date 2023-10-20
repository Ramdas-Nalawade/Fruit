/*1. Create a class Person with data members as name, age, city. 
members. Also add accept and  display function. . Create the 
object of this class in main method and invoke all the methods in that class. */

#include <iostream>
using namespace std;

class Person
{
    private:
        string name, city;
        int age;
    public:
        void accept(string name, string city, int age)
        {
            this->name = name;
            this->city = city;
            this->age = age;
        }
        void display()
        {
            cout<<"Name: "<<name<<"  "<<"age: "<<age<<"  "<<"city: "<<city<<endl;
        }
};

int main()
{
    Person p1;
    p1.accept("Ramdas", "Pune", 24);
    p1.display();
    cout<<"-------------------------------------"<<endl;
    Person p2;
    p2.accept("Sandesh", "Pune", 24);
    p2.display();
    cout<<"-------------------------------------"<<endl;
    Person p3;
    p3.accept("Shreyas", "Pune", 24);
    p3.display();
}