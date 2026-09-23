#include <iostream>

class CustomClass {
public:
    CustomClass() {
        std::cout << "CustomClass()" << std::endl;
    };
    void CustomMethod() {
        std::cout << "CustomMethod" << std::endl;
    };
  
    void Init(int argc, char* argv[]) {
        std::cout << "CustomClass.Init()" << std::endl;
    };
  
    ~CustomClass() {
        std::cout << "~CustomClass()" << std::endl;
    };
};

namespace Framework {
    void run(CustomClass& App, int argc, char* argv[]) {
        App.CustomMethod();
        App.Init(argc, argv);
    }
}
