#include <iostream>
#include <string>
using namespace std;

// Declare a structure named "car"
struct student
{
    string name;
    int age;
    char grade;
};

int main()
{

    student Mark;
    Mark.name = "Mark Comendador";
    Mark.age = 18;
    Mark.grade = 'A';

    cout
        << "Student Name: " << Mark.name << endl
        << "Student Age: " << Mark.age << endl
        << "Student Grade: " << Mark.grade << endl;

    return 0;
}
