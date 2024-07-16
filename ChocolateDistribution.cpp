class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        sort(a.begin(),a.end());
        if(n==m)
        {
            return (a[n-1]-a[0]);
        }
        else
        {
            long long minDiff=LLONG_MAX;
            for(int i=0;i<n-m+1;i++)
            {
                long long diff=a[i+m-1]-a[i];
                if(diff<minDiff)
                    minDiff=diff;
            }
            return minDiff;
        }
    }   
};
