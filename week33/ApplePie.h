#pragma once
#include "Pie.h"
class ApplePie : public Pie {
public:
    std::string description() override {
        return "Apple Pie";
    }

    void tastiness() override { // added tastiness function
        std::cout << "This apple pie is delicious!" << std::endl;
    }
};

