class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int inicio = 0;
        int fim = numbers.size() - 1;
        vector<int> resultado(2);
        while (inicio < fim) {
            if (numbers[inicio] + numbers[fim] == target) {
                resultado[0] = inicio + 1;
                resultado[1] = fim + 1;
                return resultado;
            }
            else if (numbers[inicio] + numbers[fim] < target) inicio++;
            else if (numbers[inicio] + numbers[fim] > target) fim--;
        }
        return {};
    }
};
