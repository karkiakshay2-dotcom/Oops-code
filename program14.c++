#include <iostream>
#include <string>
using namespace std;
class University {
public:
 class Department {
 private:
 std::string name;
 public:
 explicit Department(std::string departmentName)
 : name(std::move(departmentName)) {}
 void display() const {
 std::cout << "Department: " << name << '\n';
 }
 };
};
int main() {
 University::Department department("Artificial Intelligence and Data Science");
 department.display();
 return 0;
}