class Solution {
public:
    int calPoints(vector<string>& operations) {

        int res = 0;
        stack<int>scores;

        for (string op:operations){
            if (op == "+"){

                int a = scores.top();
                scores.pop();
                int b = scores.top();
                
                scores.push(a);

                scores.push(a+b);
                
            }

            else if(op=="D"){
                scores.push(scores.top()*2);
            }

            else if(op=="C"){
                scores.pop();
            }

            else {
                scores.push(stoi(op));          
            }
        }

        while (!scores.empty()){
            res+=scores.top();
            scores.pop();
        }

        return res;
        
    }
};

// res and stack declare
// check op
// stoi
// res+=