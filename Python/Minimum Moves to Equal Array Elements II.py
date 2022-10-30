# Problem link: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/

class Solution:
    def minMoves2(self, nums: List[int]) -> int:
        nums.sort()
        n = len(nums)
        num = None
        if n%2:
            num = nums[n//2]
        else:
            num = (nums[n//2] + nums[(n//2)-1])//2
        print(num)    
        
        return(sum((abs(i - num) for i in nums)))
