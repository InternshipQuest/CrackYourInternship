class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==0 || nums.size()==1)
            return;
        int z,nz;
        z=0;
        nz=0;
        
        while(z<nums.size())
        {
            while(z<nums.size() && nums[z]!=0)
            z++;
            while(nz<nums.size() && nums[nz]==0)
            nz++;
            swap(nums[z],nums[nz]);
            z+=1;
            nz+=1;
        }
    }
};
