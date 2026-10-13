class Solution {
public:
    int maxArea(vector<int>& heights) {
        int inicio = 0;
        int final = heights.size() - 1;
        int resposta = 0;
        while (inicio < final) {
            int volume = (final - inicio) * min(heights[inicio], heights[final]);
            if (volume > resposta) resposta = volume;
            if (heights[inicio] < heights[final]) {
                inicio++;
                continue;
            }
            final--;
        }
        return resposta;
    }
};
