class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> v;
        for(int i=0;i<queries.size();i++){
            int c1=queries[i][0];
            int c2=queries[i][1];
            int r=queries[i][2];
            int ans=0;
            // cout<<c1<<" "<<c2<<" "<<r<<"\n";
            for(int j=0;j<points.size();j++){
                int p1=points[j][0];
                int p2=points[j][1];
                float dis=sqrt(pow(abs(c1-p1),2)+pow(abs(c2-p2),2));
                // cout<<dis<<"\n";
                if(dis<=r) ans++;
            }
            v.push_back(ans);
        }
        return v;
    }
};