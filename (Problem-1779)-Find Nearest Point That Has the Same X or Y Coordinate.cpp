class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int ans=-1;
        int dist;
        int min_dist=INT_MAX;
        for(int i=0;i<points.size();i++)
        {
            if(points[i][0]==x or points[i][1]==y)
            {
                dist=abs(x-points[i][0])+abs(y-points[i][1]);
                if(dist<min_dist)
                {
                    min_dist=dist;
                    ans=i;
                }
            }
        }
        return ans;
    }
};
