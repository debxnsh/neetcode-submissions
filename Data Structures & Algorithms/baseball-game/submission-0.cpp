class Solution {
public:
    


    int calPoints(vector<string>& operations) {
        vector<int>records;
        int n;
        for (string op: operations){
            n = records.size();
            if (op == "+"){
                records.push_back(records[n-1]+records[n-2]);
            } else if (op == "D") {
                records.push_back(2*records[n-1]);
            } else if (op == "C") {
                records.pop_back();
            } else {
                records.push_back(stoi(op));
            }
        
        

        }
        int sum = 0;

        for (int r: records){
            sum+=r;
        }

        return sum;
    }
};

//declar records.
//chck op 4 operations.
// sum 0 sum return
// stoi(op)