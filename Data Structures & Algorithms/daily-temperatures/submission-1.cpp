class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>s;
        int n = temperatures.size();
        vector<int>result(n,0);
      

        for (int i = 0; i<n; i++){

            
            while (!s.empty()&&temperatures[i]>temperatures[s.top()]){
                int a = s.top();
                s.pop();
                result[a]= i-a;
                
               
            }


            s.push(i);
        }

        return result;
    }
};

//declare stack, 
// array declare record result
// iteratre temperatures
// condition if next greater than prev 
// a = s.top()
// result[a] =  i-a
// pop ]  loop exit
// push index i in stack