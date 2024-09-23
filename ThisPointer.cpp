#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int roll_no;
    int reg_number;
    string section;

    void input() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> roll_no;
        cout << "Enter registration number: ";
        cin >> reg_number;
        cin.ignore();
        cout << "Enter section: ";
        getline(cin, section);
    }

    void print() {
        cout << "Student name: " << this->name << endl;
        cout << "Roll number: " << this->roll_no << endl;
        cout << "Reg. Number: " << this->reg_number << endl;
        cout << "Section: " << this->section << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore();

    Student* s = new Student[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEntering details for student " << i + 1 << ":\n";
        s[i].input();
    }

    cout << "\nStudents Details are: \n";
    for (int i = 0; i < n; i++) {
        s[i].print();
        cout << endl;
    }

    delete[] s;

    return 0;
}
