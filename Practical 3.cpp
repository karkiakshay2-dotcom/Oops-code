#include <iostream>
using namespace std;

class Base {
public:
    void show() const {
        cout << "Base public function" << endl;
    }
};

// Public inheritance
class PublicDerived : public Base {
};

// Private inheritance
class PrivateDerived : private Base {
public:
    void callBaseShow() const {
        show();   // Accessible inside derived class
    }
};

int main() {

    // Public inheritance
    PublicDerived publicObject;
    publicObject.show();   // Accessible

    // Private inheritance
    PrivateDerived privateObject;
    privateObject.callBaseShow();   // Accessible through public function

    // privateObject.show(); 
    // Error: show() is private through private inheritance

    return 0;
}
