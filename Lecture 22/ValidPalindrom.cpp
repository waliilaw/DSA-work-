#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0, end = s.size() - 1;
        while (start < end) {
            while (start < end && !isalnum(s[start])) start++;
            while (start < end && !isalnum(s[end])) end--;
            if (tolower(s[start]) != tolower(s[end])) return false;
            start++;
            end--;
        }
        return true;
    }
};

int main() {
    Solution solution;
    string s = "A man, a plan, a canal, Panama";
    if (solution.isPalindrome(s)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}