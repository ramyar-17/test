#include <iostream>
#include <vector>
#include <map>

std::map<int, int> getCountOfMultiples(const std::vector<int>& numbers) {
    std::map<int, int> counts;

    for (int i = 1; i <= 9; i++) {
        counts[i] = 0;
        for (std::vector<int>::const_iterator it = numbers.begin(); it != numbers.end(); ++it) {
            if (*it % i == 0) {
                counts[i]++;
            }
        }
    }

    return counts;
}

int main() {
    std::vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(8);
    numbers.push_back(9);
    numbers.push_back(12);
    numbers.push_back(46);
    numbers.push_back(76);
    numbers.push_back(82);
    numbers.push_back(15);
    numbers.push_back(20);
    numbers.push_back(30);

    std::map<int, int> counts = getCountOfMultiples(numbers);

    std::cout << "Output:" << std::endl;
    for (std::map<int, int>::const_iterator it = counts.begin(); it != counts.end(); ++it) {
        std::cout << it->first << ": " << it->second << ", ";
    }
    std::cout << std::endl;

    return 0;
}
