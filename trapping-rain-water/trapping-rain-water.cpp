class Solution {
public:
    int trap(vector<int>& a) {
        
        int res = 0;
        int n = a.size();
        int lmax[n];
        int rmax[n];
        
        lmax[0] = a[0];
        for(int i=1;i<n;i++) {
           lmax[i]=max(a[i],lmax[i-1]);
        }
        
        rmax[n-1] = a[n-1];
        for(int i=n-2;i>0;i--) {
           rmax[i]=max(a[i],rmax[i+1]);
        }
        
        for(int i=1;i<n;i++) {
            res = res + (min(lmax[i],rmax[i])-a[i]);
        }
        
        return res;
    }
};