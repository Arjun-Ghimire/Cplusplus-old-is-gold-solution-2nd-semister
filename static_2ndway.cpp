#include <iostream>

using namespace std;

class Add{
    static int count;

    public:
    static int total(){
        return count;
    }
    void sum(int a,int b){
        cout<<"The sum is = "<<a+b<<endl;
        count++;
    }

};

int Add::count;

int main(){
    Add a;

    a.sum(10,20);

    cout<<"Addition is performed ="<<Add::total()<<"th time";

    return 0;
}