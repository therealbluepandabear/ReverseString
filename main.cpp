#include <iostream>
#include <vector>
 std::string ReverseString(const std::string& str) {
    std::vector<char> vector;

    for (char character : str) {
        vector.push_back(character);
    }

    char reversed[vector.size()];

    int index = (int)vector.size() - 1;

    for (char i : vector) {
        reversed[index] = i;
        index--;
    }

    return reversed;
}

int main() {
    std::cout << ReverseString("Hello");
    return 0;
}
