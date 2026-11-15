class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        while (stones.size() > 1) {
            sort(stones.begin(), stones.end(), greater<>());
            int tmp;
            int x = stones[0]; int y = stones[1];
            if (x == y) {
                tmp = 0;
            }
            else if (x < y) tmp = y - x;
            else tmp = x - y;
            stones.erase(stones.begin());
            stones[0] = tmp;
        }
        return stones[0];
    }
};
