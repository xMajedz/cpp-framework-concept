#include "Framework/Base.hpp"

#include <iostream>

class Program : public Framework::Base {
public:
    Program() {
        std::cout << "Program()" << std::endl;      
    };
  
    void Init(int argc, char* argv[]) override {
        std::cout << "Program.Init()" << std::endl;
    };
  
    ~Program() override {
        std::cout << "~Program()" << std::endl;
    };
};
