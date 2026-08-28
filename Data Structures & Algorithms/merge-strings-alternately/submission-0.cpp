class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int w1 = 0;
        int w2 = 0;
        string s = "";
        while (w1<word1.length()||w2<word2.length()){
            if (w1<word1.length()){
                s.push_back(word1[w1]);
                w1++;
            } 

            if (w2<word2.length()){
                s.push_back(word2[w2]);
                w2++;
            } 

        }
        return s;
    }
};