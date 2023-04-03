#include <iostream>
#include <string>
#include "ApplePie.h"
#include "OrangePie.h"
#include "Pie.h"
int main() {
    ApplePie apple_pie;
    OrangePie orange_pie;

    std::cout << apple_pie.description() << std::endl;
    apple_pie.tastiness();

    std::cout << orange_pie.description() << std::endl;
    orange_pie.tastiness();

    return 0;
}
