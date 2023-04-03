#pragma once
#include "Pie.h"
class OrangePie : public Pie {
public:
    std::string description() override {
        return "Orange Pie";
    }

    void tastiness() override { // added tastiness function
        std::cout << "This Orange pie is scrumptious!" << std::endl;
    }
};

