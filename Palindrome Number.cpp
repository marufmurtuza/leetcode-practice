class Solution {
public:
    bool isPalindrome(int x) {
        bool pal = true; // initialize to true
        string numtostr = to_string(x);
        int strlen = numtostr.length();
        for(int i = 0; i < strlen/2; i++ ){
            if(numtostr[i] != numtostr[strlen-i-1]){ 
                pal = false;
                break; 
            } 
        }
    return pal;
    }
};
