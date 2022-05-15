#include <iostream>

using namespace std;

class Add{
    static int count;
    int num;

    public:
    void getnum(){
        cin>>num;
    }
    static int total(){
        return count;
    }
    void sum(Add a){
        count++;
        Add c;
        c.num= a.num + num;
        c.display();
    }
    void display(){
        cout<<"The sum is = "<<num;
    }
};

int Add::count;

int main(){
    Add a, b;
    cout<<"Enter value of a and b";
    a.getnum();
    b.getnum();
    a.sum(b);

    cout<<"Addition is performed ="<<Add::total()<<"th time";

return 0;
}