#include "Framework/Base.hpp"

#include <iostream>

class BaseClass : public Framework::Base {
public:
    BaseClass() {
        std::cout << "BaseClass()" << std::endl;
    };
  
    void Init(int argc, char* argv[]) override {
        std::cout << "BaseClass.Init()" << std::endl;
    };
  
    ~BaseClass() override {
        std::cout << "~BaseClass()" << std::endl;
    };
};
