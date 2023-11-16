#ifndef MY_STRING_FUNCTIONS_HPP
#define MY_STRING_FUNCTIONS_HPP

#include <string>
#include <cctype>

// Function to remove character at the specified index from a string
void rc(std::string& str, size_t index) {
    if (index < str.length()) {
        str.erase(index, 1);
    }
}

// Function to remove whitespace characters from a string
std::string rw(const std::string& input) {
    std::string result;
    for (char c : input) {
        if (!std::isspace(c)) {
            result += c;
        }
    }
    return result;
}

#endif // MY_STRING_FUNCTIONS_HPP
