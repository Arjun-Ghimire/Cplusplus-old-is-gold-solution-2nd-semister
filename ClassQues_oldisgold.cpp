#include <iostream>

using namespace std;

class Person{
    protected:
    char name[10],address[20];
    int age;
    public:
    Person(){
        age=0;
    }
    void setdata(){
        cout<<"\n Enter value for person, Enter name, address and age respectively = ";
        cin>>name>>address>>age;        
    }
    void showdata(){
        cout<<"\n Details of person are = ";
        cout<<name<<address<<age;
    }
};

class Teacher: public Person{
    protected:
    char qualification[20],department[20];
    public:
    void setdata(){
        cout<<"\n For teacher enter the value of name,address, age,qualification and department respectively = ";
        cin>>name>>address>>age>>qualification>>department;
    }
    void showdata(){
        cout<<"\n The detail of teacher is = "<<name<<endl<<address<<endl<<age<<endl<<qualification<<endl<<department<<endl;
    }
};

class Student: public Person{
    protected:
    char program[10];
    int sem;
    public:
    void setdata(){
        cout<<"\n For students enter the value of name,address, age,program and sem respectively = ";
        cin>>name>>address>>age>>program>>sem;
    }
    void showdata(){
        cout<<"\n The detail of student is = "<<name<<endl<<address<<endl<<age<<endl<<program<<endl<<sem<<endl;
    }
};

int main(){
    Student s1;
    Teacher t1;
    Person p1;


    s1.setdata();
    s1.showdata();

    t1.setdata();
    t1.showdata();
    return 0;
}