#include <iostream>

using namespace std;

class Second;
class Third;

class First{
    int num1;
    
    public:
    First(int n){
        num1 = n;
    }
    First(){}
    int largest(Second,Third, int);
    
};

class Second{
    int num2;

    public:
    Second(int n){
        num2 = n;
    }
    Second(){}
    friend int First::largest(Second,Third,int);
};

class Third{
    int num3;

    public:
    Third(int n){
        num3 = n;
    }
    Third(){}
    friend int First::largest(Second,Third,int);
};

int First::largest(Second n2,Third n3,int a){

    int l1 = (num1>n2.num2)?num1:n2.num2;
    int l2 = n3.num3>a ? n3.num3:a;
    return (l1>l2)?l1:l2;
}

int main(){

    First n1(10);
    Second n2(20);
    Third n3(30);

    cout<<"The largest number is = "<< n1.largest(n2,n3,40);

    return 0;

}