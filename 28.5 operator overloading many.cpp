#include<iostream>
using namespace std;

class Point
{
private:
    int x, y;
public:
    Point();
    Point operator++(int);
    Point operator--();
    Point operator--(int);
    Point operator++();
    Point operator+(Point);
    Point operator-(Point);
    Point(int, int);
    void display();
    
};

Point::Point(){
    x = y =0;
}

Point::Point(int a, int b): x(a), y(b){
    
}

Point Point:: operator++(){
    return (Point(++x, ++y));
}

Point Point:: operator++(int a){
    return (Point(++x, ++y));
}

Point Point:: operator--(int a){
    return (Point(--x, --y));
}

Point Point:: operator--(){
    return (Point(--x, --y));
}

Point Point:: operator+(Point p){
    return (Point(this->x + p.x, this->y + p.y));
    //only x in place of this->x will also be sufficient :)
}

Point Point::operator-(Point p){
    return (Point(x - p.x, y - p.y));
}

void Point:: display(){
    cout<< x << " " << y << endl;
}

int main(){
    Point a(1, 2), b(5, 7), c;
    
    c = a + b;
    c.display();
    c = a - b;
    c.display();

    ++c;
    c.display();

    c--;
    c.display();
    
    return 0;
}