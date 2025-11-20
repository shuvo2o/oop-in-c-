#include <iostream>
using namespace std;
class Student
{
public:
    int id;
    double gpa;
};
int main()
{
    Student Shuvo;
    Shuvo.id = 340985;
    Shuvo.gpa = 3.58;
    cout << Shuvo.id << endl;
    cout << Shuvo.gpa << endl;
}