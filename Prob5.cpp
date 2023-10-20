/*5. Create a class Point with data members as x,y. Add AcceptPoint and  add the display 
function. Create the object of this class in main method and invoke all the methods 
in that class. */

#include <iostream>
using namespace std;

class Point
{
    private:
        int x, y;
    public:
        void accept(int x, int y)
        {
            this->x = x;
            this->y = y;
        }
        void display()
        {
            cout<<"X = "<<x<<"  "<<"y = "<<y<<endl;
        }
};
int main()
{
    Point p1;
    p1.accept(10, 20);
    p1.display();
    cout<<"------------------------------"<<endl;
    Point p2;
    p2.accept(33, 55);
    p2.display();
}