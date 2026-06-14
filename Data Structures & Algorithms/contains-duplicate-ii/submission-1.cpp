class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,vector<int>>m;
        for(int i=0;i<n;i++){
            m[nums[i]].push_back(i);
        }

        for(auto &a:m){
            vector<int>&v = a.second;
            for(int i=1;i<v.size();i++){
                if(abs(v[i]-v[i-1] <=k)) return true;
                
            }
        }
        return false;

        
    }
};