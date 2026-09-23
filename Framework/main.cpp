#include "Framework/Base.hpp"
#include "Framework/Derived.hpp"

namespace Framework {
    void run(Base& App, int argc, char* argv[]) {
        App.BaseMethod();
        App.Init(argc, argv);
    }

    void run(Derived& App, int argc, char* argv[]) {
        App.DerivedMethod();
        App.Init(argc, argv);
    }
}

#include PROGRAM_HEADER

int main(int argc, char* argv[]) {
    PROGRAM_NAME App;
    Framework::run(App, argc, argv);
}
