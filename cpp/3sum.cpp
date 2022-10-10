class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        if(nums.size()<3)
            return res;
        int target;
        for(int i=0;i<nums.size();i++){
            target=-nums[i];
            for(int lft=i+1,rgt=nums.size()-1;lft<rgt;){
                if(nums[lft]+nums[rgt]==target){
                    res.push_back({nums[i],nums[lft],nums[rgt]});
                    int fr=nums[lft];
                    int bk=nums[rgt];
                    while(lft<rgt && nums[lft]==fr){
                      lft++;
                    }   
                    while(rgt>lft && nums[rgt]==bk){
                        rgt--;   
                    }
                }else if(nums[lft]+nums[rgt]<target){
                    lft++;
                }else{
                    rgt--;
                }
            }
            while(i+1<nums.size() && nums[i+1]==nums[i])
                i++;
        }
        return res;

    }
};
