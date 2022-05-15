#include <iostream>

using namespace std;

class Point{
    int a,b;

    public:
    Point(int a,int b){
        this->a = a;
        this->b = b;
    }
    void display(){
        cout<<"The value of a = "<<a<<"The value of b ="<<b<<endl;
    }
    Point(){};

    Point(Point &p){
        a= p.a;
        b= p.b;
    }
};

int main(){
   Point p(10,20);
   Point a(p); 

cout<<"The value of p objects = ";
   p.display();
   cout<<"The value of a objects = ";
   a.display();
   
}