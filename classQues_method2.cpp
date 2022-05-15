#include <iostream>

using namespace std;

class Person{
    protected:
    string name,address;
    int age;
    public:
    Person(){}
    Person(string name,string address,int age){
        this->name = name;
        this->address=address;
        this->age = age;
    }
    void showdata(){
        cout<<"\n Details of person are = ";
        cout<<name<<address<<age;
    }
};

class Teacher: public Person{
    protected:
    string qualification,department;
    public:
    Teacher(){}
    Teacher(string qua,string depart):Person("Ram","ktm",22){
        qualification=qua;
        department=depart;
    }
    void showdata(){
        cout<<"\n The detail of teacher is = "<<name<<endl<<address<<endl<<age<<endl<<qualification<<endl<<department<<endl;
    }
};

class Student: public Person{
    protected:
    string program;
    int sem;
    public:
    Student(){}
    Student(string p,int s):Person("Arjun","ktm",22){
        program=p;
        sem = s;
    }
    void showdata(){
        cout<<"\n The detail of student is = "<<name<<endl<<address<<endl<<age<<endl<<program<<endl<<sem<<endl;
    }
};

int main(){
    Teacher t1("teacher","software");
    Student s1("bese",2);

    t1.showdata();
    s1.showdata();
    return 0;
}