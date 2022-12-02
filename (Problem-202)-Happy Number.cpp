class Solution {
public:
    int sqFunc(int n){
	    int sum = 0;
	    while(n > 0){
		    sum = sum + ((n%10)*(n%10));
		    n=n/10;
	    }
	    return sum;
    }
    
    bool isHappy(int n) {
	    unordered_map<int, int> map;
	    while(n != 1) {
		    if(map[n] == 0)map[n]++;
		    else return false;
		    n = sqFunc(n);
	}
	return true;
}	
};