#include <iostream>
#include <unordered_map>
#include <string>

bool canConstruct(const std::string& ransomNote, const std::string& paper) {
    std::unordered_map<char, int> count;
    for (char c : paper) {
        count[c]++;
    }
    for (char c : ransomNote) {
        if (count[c] == 0) {
            return false;
        }
        count[c]--;
    }
    return true;
}

int main() {
    std::string ransomNote1 = "aa";
    std::string paper1 = "ab";
    std::cout << (canConstruct(ransomNote1, paper1) ? "true" : "false") << std::endl;

    std::string ransomNote2 = "aa";
    std::string paper2 = "aab";
    std::cout << (canConstruct(ransomNote2, paper2) ? "true" : "false") << std::endl;

    return 0;
}
