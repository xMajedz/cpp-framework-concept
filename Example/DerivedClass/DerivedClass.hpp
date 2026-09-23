#include "Framework/Derived.hpp"

#include <iostream>

class DerivedClass : public Framework::Derived {
public:
    DerivedClass() {
        std::cout << "DerivedClass()" << std::endl;
    };
  
    void Init(int argc, char* argv[]) override {
        std::cout << "DerivedClass.Init()" << std::endl;
    };
  
    ~DerivedClass() override {
        std::cout << "~DerivedClass()" << std::endl;
    };
};
