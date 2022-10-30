class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        def reverse(arr,l,h):
            while l<h:
                arr[l],arr[h] = arr[h],arr[l]
                l+=1
                h-=1

        idx1,idx2 = -1,-1
        for i in range(len(nums)-1,0,-1):
            if nums[i-1]<nums[i]:
                idx1 = i-1
                break
        if idx1!=-1:
            for i in range(len(nums)-1,-1,-1):
                if nums[i]>nums[idx1]:
                    idx2 = i
                    break
        # print(idx1,idx2)
            nums[idx1],nums[idx2] = nums[idx2],nums[idx1]
            reverse(nums,idx1+1,len(nums)-1)
        else:
            reverse(nums,0,len(nums)-1)
        return nums
