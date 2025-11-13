#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void showPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
public:
    int roll;

    void showStudent() {
        showPerson(); 
        cout << "Roll Number: " << roll << endl;
    }
};

class Teacher : public Person {
public:
    string subject;

    void showTeacher() {
        showPerson(); 
        cout << "Subject: " << subject << endl;
    }
};
main() {
    Student s;
    s.name = "Alice";
    s.age = 20;
    s.roll = 101;

    Teacher t;
    t.name = "Mr. Bob";
    t.age = 40;
    t.subject = "Math";

    cout << "Student Details:" << endl;
    s.showStudent();

    cout << "\nTeacher Details:" << endl;
    t.showTeacher();

}

