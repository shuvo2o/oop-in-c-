#include <iostream>
using namespace std;
class Student
{
    public:
    int id;
    double gpa;
    void display(){
       cout << id << " " <<gpa << endl;
    }
    void setValue(int x, double y){
        id = x;
        gpa = y;
    }

};
int main()
{
    Student Shuvo;
    Shuvo.setValue(105, 3.58);
    Shuvo.display();
}
