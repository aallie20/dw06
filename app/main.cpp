#include <iostream>

#include "shapes.h"

int main(int argc, char** argv) {

    if (argc < 3) {
        std::cout << "Usage: ./build/debug_warmup <width> <length>\n";
        return 1;
    }

    std::cout << "The area is: " << area(argv[1], argv[2]) << std::endl;
    std::cout << "The perimeter is: " << perimeter(argv[1], argv[2]) << std::endl;

    return 0;
}
