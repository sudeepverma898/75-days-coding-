#include<bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<int> p;
        vector<vector<int>> ans;
        priority_queue<pair<int, pair<int, int>>> maxi;
        for(int i=0; i<points.size(); i++){
            maxi.push({(points[i][0]*points[i][0])+(points[i][1]*points[i][1]), {points[i][0], points[i][1]}});
            if(maxi.size()>k){
                maxi.pop();
            }
        }
        while(maxi.size()>0){
            p.push_back(maxi.top().second.first);
            p.push_back(maxi.top().second.second);
            ans.push_back(p);
            p.clear();
            maxi.pop();
        }
        return ans;
    }
};