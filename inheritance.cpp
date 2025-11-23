#include <iostream>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    void display1(){
        cout<< "Name: " <<name <<endl;
        cout<< "Age: " <<age <<endl;
    }
};
class Student : public Person{
    // name, age, display1()
    public:
    int id;
    void display2(){
        cout<< "Id: " <<id <<endl;
        cout<< "Name: " <<name <<endl;
        cout<< "Age: " <<age <<endl;
    }
};
int main()
{
    Student sl;
    sl.id =01;
    sl.name ="Shuvo";
    sl.age =25;
    sl.display2();
}