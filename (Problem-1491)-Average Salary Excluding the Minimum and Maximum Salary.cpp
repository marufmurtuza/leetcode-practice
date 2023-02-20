class Solution {
public:
    double average(vector<int>& salary) {
        double salsum = 0;
        double salavg = 0;
        sort(salary.begin(),salary.end());
        salary.pop_back();       
        for(int i = 1; i < salary.size(); i++){
            salsum += salary[i];
        }
        salavg = salsum/(salary.size()-1);
        return salavg;
    }
};
