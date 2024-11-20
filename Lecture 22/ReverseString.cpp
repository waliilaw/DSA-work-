#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string s = "example";
    int n = s.size();
    int start = 0;
    int end = n - 1;

    while (start < end) {
        std::swap(s[start++], s[end--]);
    }

    std::cout << "Reversed string: " << s << std::endl;

    return 0;
}