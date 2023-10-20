/*4. Create a class Book with data members as bname,id,author,price. Write AcceptBook function.
Also add the display function. Create Default and Parameterized constructors. Create 
the object of this class in main method and invoke all the methods in that class. */

#include <iostream>
using namespace std;

class Book
{
    private:
        int id, price;
        string bname, author;
    public:
        Book()
        {
            id = 1;
            price = 500;
            bname = "ABC";
            author = "Mr. XYZ";
        }
        Book(int id, int price, string bname, string author)
        {
            this->id = id;
            this->price = price;
            this->bname = bname;
            this->author = author;
        }
        void accept(int id, int price, string bname, string author)
        {
            this->id = id;
            this->price = price;
            this->bname = bname;
            this->author = author;
        }
        void display()
        {
            cout<<id<<"  "<<bname<<"  "<<author<<"  "<<price<<endl;
        }
};

int main()
{
    Book b1;
    b1.display();
    cout<<"----------------------------------------"<<endl;

    Book b2(2, 700, "Mritunjay", "Mr. Shivaji Sawant");
    b2.display();
    cout<<"----------------------------------------"<<endl;

    b2.accept(3, 5, "Sakal", "Mr. Pawar");
    b2.display();
}