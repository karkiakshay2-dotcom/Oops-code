#include <iostream>
#include <string>
#include <utility>

using namespace std;

// Base class
class Person {
protected:
    string name;

public:
    // Constructor
    explicit Person(string personName)
        : name(move(personName)) {}

    // Display name
    void displayName() const {
        cout << "Name: " << name << '\n';
    }
};

// Derived class
class Student : public Person {
private:
    int rollNumber;

public:
    // Constructor
    Student(string studentName, int roll)
        : Person(move(studentName)), rollNumber(roll) {}

    // Display student details
    void displayStudent() const {
        displayName();
        cout << "Roll Number: " << rollNumber << '\n';
    }
};

int main() {
    // Create Student object
    Student student("Amit", 101);

    // Display student details
    student.displayStudent();

    return 0;
}
