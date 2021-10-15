#include <iostream>
#include <vector>

void ReverseString(const std::string& str) {
    std::vector<char> vector;

    for (char character : str) {
        vector.push_back(character);
    }
}

int main() {
    return 0;
}
