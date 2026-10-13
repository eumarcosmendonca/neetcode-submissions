#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> tabela;
        for (int i = 0; i < nums.size(); i++)
        {
            tabela[nums[i]]++;
        }
        vector<pair<int, int>> frequencia(tabela.begin(), tabela.end());
        sort(frequencia.begin(), frequencia.end(), [](const pair<int, int> &a, const pair<int, int> &b)
             { return a.second > b.second; });
        vector<int> resultado;
        for (int i = 0; i < k; i++)
        {
            resultado.push_back(frequencia[i].first);
        }
        return resultado;
    }
};