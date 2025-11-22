#include <iostream>
using namespace std;
class Student
{
public:
    int admissionFee;
    Student(int x)
    {
        admissionFee = x;
        cout<< admissionFee <<endl;
    }
};
int main()
{
    Student sl(12000);
}