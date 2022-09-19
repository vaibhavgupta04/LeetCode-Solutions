class Solution {
public:
    int trap(vector<int>& h) {
        int n=h.size();
        int lo=0,hi=n-1;
        int lm=0,rm=0;
        int ans=0;
        while(lo<=hi){
            if(h[lo]<=h[hi]){
                if(h[lo]>=lm){
                    lm=h[lo];
                }else{
                    ans+=(lm-h[lo]);
                }
                lo++;
            }else{
                if(h[hi]>=rm){
                    rm=h[hi];
                }else{
                    ans+=(rm-h[hi]);
                }
                hi--;
            }
        }
        return ans;
    }
};