#include <iostream>

void generateSeries(int a) {
    for (int i = 1; i <= a; i++) {
        std::cout << 2 * i - 1;
        if (i != a) {
            std::cout << ", ";
        }
    }
}

int main() {
    int input;

    std::cout << "Enter a number (a): ";
    std::cin >> input;

    generateSeries(input);

    return 0;
}

