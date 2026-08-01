class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0;
        int ans=0; 
        int rp= height.size()-1;
    while (rp>lp){ 

        int w= rp-lp;
        int ht= min(height[lp], height[rp]); 
       height[rp]>height[lp] ? lp++ : rp-- ;
        int maxwater = w * ht;
        ans = max(ans,maxwater);

    }
return ans;

    }
};