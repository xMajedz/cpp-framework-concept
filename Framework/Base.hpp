#pragma once

#include <iostream>
namespace Framework {
    class Base {
    public:
        void BaseMethod() {
            std::cout << "BaseMethod" << std::endl;
        }
        virtual void Init(int argc, char* argv[]) = 0;
        virtual ~Base() = 0;
    };
}

Framework::Base::~Base() = default;

