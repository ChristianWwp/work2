#pragma once
#include <string>
#include <iostream>
class Pie {
public:
    virtual std::string description() = 0;
    virtual void tastiness() = 0; // added tastiness function
};

