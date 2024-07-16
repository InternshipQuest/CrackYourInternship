class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<pair<int,int>> num_pairs;
        for(int i=0;i<nums.size();i++)
            num_pairs.push_back({nums[i],i});
        sort(num_pairs.begin(),num_pairs.end());
        int low=0;
        int high=nums.size()-1;
        while(low<=high)
        {
            int sum=num_pairs[low].first+num_pairs[high].first;
            if(sum==target)
                return {num_pairs[low].second,num_pairs[high].second};
            else if(sum<target)
                low+=1;
            else
                high-=1;
        }
        return {};
    }
};
