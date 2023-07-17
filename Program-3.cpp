#include <iostream>

void generateSeries(int a) {
    for (int i = 1; i <= a; i += 2) {
        std::cout << i;
        if (i + 2 <= a) {
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
