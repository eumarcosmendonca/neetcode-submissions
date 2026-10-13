#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int tamanho = nums.size();
        vector<int> resultado(tamanho, 1), prefixo(tamanho, 1), sufixo(tamanho, 1);
        for (int i = 1; i < tamanho; i++) {
            prefixo[i] = prefixo[i-1] * nums[i-1];
        }
        for (int i = tamanho - 2; i >= 0; i--) {
            sufixo[i] = sufixo[i+1] * nums[i+1];
        }
        for (int i = 0; i < tamanho; i++) {
            resultado[i] = prefixo[i] * sufixo[i];
        }
        return resultado;
    }
};
