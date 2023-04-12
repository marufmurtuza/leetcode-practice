class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> outvect;
        for(int i = 0 ; i < nums.size(); i++){
            int testvar = nums[i];
            for(int c = i+1; c < nums.size(); c++){
                if(testvar + nums[c] == target){
                    outvect.push_back(i);
                    outvect.push_back(c);
                }
            }
        }
        return outvect;
    }
};