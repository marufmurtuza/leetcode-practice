class Solution {
public:
    bool isPalindrome(int x) {
        bool pal = false;
        string numtostr = to_string(x);
        cout << numtostr;
        int strlen = numtostr.length();
        for(int i = 0; i < strlen; i++ ){
            if(numtostr[i] == numtostr[strlen-1]){
                pal = true;
            }
            else{
                pal = false;
            }
        strlen --;
        }
    return pal;
    }
};