
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(), weights.end());
        int r = 0;

        for (int w : weights) {
            r += w;
        }

        int ans = r;

        while (l <= r) {
            int cap = l + (r - l) / 2;
            int d = 1;
            int load = 0;

            for (int w : weights) {
                if (load + w > cap) {
                    d++;
                    load = 0;
                }
                load += w;
            }

            if (d > days) {
                l = cap + 1;
            } else {
                ans = cap;
                r = cap - 1;
            }
        }

        return ans;
    }
};
