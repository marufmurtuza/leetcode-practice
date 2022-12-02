class Solution {
public:
    int arraySign(vector<int>& nums) {
        int x;
        for(int i = 0; i < nums.size(); i++ ){
            x = x + nums[i];
        }
        if(x < 0){
            return -1;
        }
        else if(x == 0){
            return 0;
        }
        else{
            return 1;
        }
    }
};
