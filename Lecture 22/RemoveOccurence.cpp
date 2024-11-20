#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.length() != 0 && s.find(part) < s.length()) {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};

int main() {
    Solution solution;
    string s = "abcabcabc", part = "abc";
    cout << solution.removeOccurrences(s, part) << endl;
    return 0;
}