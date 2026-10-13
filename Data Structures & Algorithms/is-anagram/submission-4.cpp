#include <string>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
        {
            return false;
        }

        unordered_map<char, int> tabelas, tabelat;
        for (int i = 0; i < s.size(); i++)
        {
            tabelas[s[i]]++;
            tabelat[t[i]]++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (tabelas[s[i]] != tabelat[s[i]])
            {
                return false;
            }
        }
        return true;
    }
};