class Solution {
public:
    int countOdds(int low, int high) {
        int odds = 0;
        for(;low <= high; low++){
            if(low%2!=0){
                odds += 1;
            }
        }      
    return odds;    
    }
};