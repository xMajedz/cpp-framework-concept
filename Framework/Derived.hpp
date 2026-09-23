#pragma once

#include <iostream>

namespace Framework {
    class Derived: public Base {
    public:
        void DerivedMethod() {
            std::cout << "DerivedMethod" << std::endl;
        }
        virtual void Init(int argc, char* argv[]) = 0;
        virtual ~Derived() = 0;
    };
}

Framework::Derived::~Derived() = default;

