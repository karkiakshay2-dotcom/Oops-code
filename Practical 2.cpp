#include <iostream>
#include <string>
#include <utility>

using namespace std;

// Base class
class Employee {
protected:
    string name;

public:
    // Constructor
    explicit Employee(string employeeName)
        : name(move(employeeName)) {
    }
};

// Derived class
class Developer : public Employee {
private:
    string language;

public:
    // Constructor
    Developer(string employeeName, string programmingLanguage)
        : Employee(move(employeeName)),
          language(move(programmingLanguage)) {
    }

    // Display employee details
    void display() const {
        cout << "Developer: " << name << '\n';
        cout << "Language: " << language << '\n';
    }
};

// Main function
int main() {
    Developer developer("Neha", "C++");

    developer.display();

    return 0;
}
