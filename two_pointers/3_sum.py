class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        from collections import defaultdict
        i=0
        j=0
        k=0
        target_sum = 0
        #dict_sum = defaultdict(int)

        for i in range(len(nums)):
            j=i+1
            k = len(nums)

            current_sum = nums[i] + nums[j] + nums[k]

            while((current_sum != target_sum) and (j <= k)):
                if(current_sum < target_sum):
                    j+=1
                if(current_sum > target_sum ):
                    k-=1
            
