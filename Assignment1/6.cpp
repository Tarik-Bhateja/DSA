#include <iostream>
using namespace std;
class Rectangle{
    private:
        int l, b;
    public:
        void input(){
            // int l,b;
            cout<<"ENTER LENGTH:";
            cin>>l;
            cout<<"ENTER BREADTH";
            cin>>b;
        }
        int area(){
            return l * b;
        }
        int perimeter()
        {
            return 2*l + 2*b;
        }
};
int main(){
    Rectangle r1, r2;
    r1.input();
    cout << "Area of Rectangle1: " << r1.area() << endl;
    cout << "Perimeter of Rectangle1: " << r1.perimeter() << endl;
    r2.input();
    cout << "Area of Rectangle2: " << r1.area() << endl;
    cout << "Perimeter of Rectangle2: " << r2.perimeter() << endl;
}
