class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        backtrack(nums,res,temp,nums.size());
        return res;
    }
    
    void backtrack(vector<int>& nums, vector<vector<int>>& res, vector<int>& temp, int n){
        if(n==0){
            res.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(find(temp.begin(),temp.end(),nums[i])==temp.end()){
                temp.push_back(nums[i]);
                backtrack(nums,res,temp,n-1);
                temp.pop_back();
            }
        }
    }
};
