#include <iostream>
#include <cctype>
#include <string>

class Solution {
public:
    bool isPalindrome(string s) {
        int inicio = 0;
        int fim = s.size() - 1;
        while (inicio < fim) {
            if (!isalnum(s[inicio])) {
                inicio++;
                continue;
            }
            if (!isalnum(s[fim])) {
                fim--;
                continue;
            }
            if(tolower(s[inicio]) != tolower(s[fim])) return false;
            inicio++;
            fim--;
        }
        return true;
    }
};
