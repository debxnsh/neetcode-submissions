class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());
        int tm = h;
        
        int ans =0;

        while (l<=r){
            int k = l+(r-l)/2;
            long long t =0;
            for (int p:piles){
                t +=(p+k-1)/k;
            }
            if (t>h){
                l=k+1;
            } else {
                r=k-1;
                tm=t;
                ans = k;
            }

        }
        return ans;
    }
};
