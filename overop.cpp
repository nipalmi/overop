#include <iostream>
using namespace std;

class Point
{
    int x,y,z;

public:
    Point(int x1, int y1, int z1)
    {
        x = x1; y = y1; z = z1;
    }
    friend ostream& operator<<(ostream& os, const Point& pt);

};

ostream& operator<<(ostream& os, const Point& pt)
{
    os << pt.x << ' ' << pt.y << ' ' << pt.z;
    return os;
}
 
class Rectangle
{
    int length,breadth;

public:
    Rectangle(int length1, int breadth1)
    {
        length = length1; breadth = breadth1;
    }
    friend ostream& operator<<(ostream& os, const Rectangle& rt);

};

ostream& operator<<(ostream& os, const Rectangle& rt)
{
    os << rt.length << ' ' << rt.breadth;
    return os;
}
 
class Triangle
{
    int base,height;

    public:
    Triangle(int base1, int height1)
    {
        base = base1; height = height1;
    }
    friend ostream& operator<<(ostream& os, const Triangle& tr);

};

ostream& operator<<(ostream& os, const Triangle& tr)
{
    os << tr.base << ' ' << tr.height;
    return os;
}
 
int main(){

    int x2, y2, z2;
    int length2, breadth2;
    int base2, height2;

    cout << ("inserire coordinate punto, x, y, z separate da spazio: ");

    cin >> x2 >> y2 >> z2;

    cout << ("inserire lunghezza e larghezza rettangolo separate da spazio: ");

    cin >> length2 >> breadth2;

    cout << ("inserire base e altezza triangolo separate da spazio: ");

    cin >> base2 >> height2;

    cout << "Output: ";

    Point p1(x2, y2, z2);
    cout << p1;

    Rectangle r1 (length2, breadth2);
    cout << " " << r1;

    Triangle t1 (base2, height2);
    cout << " " << t1;

}