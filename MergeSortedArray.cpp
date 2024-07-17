class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a1=m-1;
        int a2=n-1;
        int p=m+n-1;
        while(a2>=0 && a1>=0)
        {
            if(nums2[a2]>nums1[a1])
            {
                nums1[p]=nums2[a2];
                p--;
                a2--;
            }

            else
            {
                nums1[p]=nums1[a1];
                p--;
                a1--;
            }
        }
        while(a2>=0)
        {
            nums1[p]=nums2[a2];
            p--;
            a2--;
        }

        
    }
};
