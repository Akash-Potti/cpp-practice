#include <iostream>
using namespace std;
struct student
{
    char name[50];
    int roll_number;
    float marks;
};
int main()
{
    student s;
    cout << "Enter The Information" << endl;
    cout << "Enter the name of the students: ";
    cin >> s.name;
    cout << "Enter roll number: ";
    cin >> s.roll_number;
    cout << "Enter marks: ";
    cin >> s.marks;
    cout << "\nDISPLAYING INFORMATION" << endl;
    cout << "NAME: " << s.name << endl;
    cout << "ROLL NUMBER: " << s.roll_number << endl;
    cout << "MARKS: " << s.marks << endl;
    return 0;
}