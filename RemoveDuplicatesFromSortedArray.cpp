class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0 || nums.size()==1)
            return nums.size();
        int curr,unique;
        
        unique=0;
        curr=1;

        for(curr;curr<nums.size();curr++)
        {
            if(nums[curr]!=nums[unique])
            {
                unique++;
                nums[unique]=nums[curr];
            }
        }
        return unique+1;
    }
};
