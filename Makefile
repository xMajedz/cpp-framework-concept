CXX=g++

Program=Program

PROGRAM_NAME=$(Program)

PROGRAM_SOURCE=$(Program)/$(Program).hpp

FRAMEWORK_SOURCE=Framework/main.cpp Framework/Base.hpp Framework/Derived.hpp

INCDIRS=-I.

DEFINES=-DPROGRAM_NAME=$(PROGRAM_NAME) -DPROGRAM_HEADER=\"$(PROGRAM_SOURCE)\"

$(Program)/$(Program): $(FRAMEWORK_SOURCE) $(PROGRAM_SOUCRE) 
	$(CXX) -o $@ $(INCDIRS) $(DEFINES) $<

Example: Example/BaseClass/BaseClass Example/CustomClass/CustomClass Example/DerivedClass/DerivedClass

Example/BaseClass/BaseClass: $(FRAMEWORK_SOURCE) Example/BaseClass/BaseClass.hpp
	$(CXX) -o $@ $(INCDIRS) -DPROGRAM_NAME=BaseClass -DPROGRAM_HEADER=\"$@.hpp\" $<

Example/DerivedClass/DerivedClass: $(FRAMEWORK_SOURCE) Example/BaseClass/BaseClass.hpp
	$(CXX) -o $@ $(INCDIRS) -DPROGRAM_NAME=DerivedClass -DPROGRAM_HEADER=\"$@.hpp\" $<

Example/CustomClass/CustomClass: $(FRAMEWORK_SOURCE) Example/BaseClass/BaseClass.hpp
	$(CXX) -o $@ $(INCDIRS) -DPROGRAM_NAME=CustomClass -DPROGRAM_HEADER=\"$@.hpp\" $<
