#include <iostream>
#include "Pie.h"
#include "ApplePie.h"
#include "OrangePie.h"
#include <string>
int main() {
    Pie* piePtr = nullptr;

    std::cout << "Select a pie:\n";
    std::cout << "1. Apple Pie\n";
    std::cout << "2. Raspberry Pie\n";
    std::cout << "Enter your choice: ";

    int choice;
    std::cin >> choice;

    switch (choice) {
    case 1:
        piePtr = new ApplePie();
        break;
    case 2:
        piePtr = new OrangePie();
        break;
    default:
        std::cout << "Invalid choice!\n";
        return 1;
    }

    std::cout << piePtr->description() << std::endl;
    piePtr->tastiness(); // calling tastiness function on the selected pie

    delete piePtr;

    return 0;
}
