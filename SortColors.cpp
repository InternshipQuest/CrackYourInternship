class Solution {
public:
    void sortColors(vector<int>& nums) {
        int colors[3]={0};
        for(int i=0;i<nums.size();i++)
            colors[nums[i]]++;
        int x=0;
        while(x<nums.size())
        {
            if(colors[0]!=0)
            {
                nums[x]=0;
                colors[0]-=1;
            }
            else if(colors[1]!=0)
            {
                nums[x]=1;
                colors[1]-=1;
            }
            else
            {
                nums[x]=2;
                colors[2]-=1;
            }
            x+=1;

        }
    }
};
