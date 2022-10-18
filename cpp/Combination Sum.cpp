class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> temp;
        sort(candidates.begin(),candidates.end());
        recursiveSolution(res,temp,candidates,target,0);
        return res;
    }
    
    void recursiveSolution(vector<vector<int>>& res, vector<int> temp,vector<int> nums, int target, int start){
        if(target<0) return;
        else if(target==0){
            res.push_back(temp);
        }
        else{
            for(int i=start; i<nums.size()&&nums[i]<=target;i++){
                temp.push_back(nums[i]);
                recursiveSolution(res,temp,nums,target-nums[i],i);
                temp.pop_back();
            }
        }
    }
};
