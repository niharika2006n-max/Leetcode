class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums){
         int pre=1;
        int post=1;
        vector<int> ans(nums.size(),1);


    for(int i =0;i<nums.size();i++)
    {
        ans[i]=pre;
        pre= pre*nums[i];
    }
    for(int i=nums.size()-1; i>=0; i--)
    {
        ans[i]*=post;
        post= post*nums[i];
    }
 
    return ans;
    }      
 

};