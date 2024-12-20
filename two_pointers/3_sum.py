class Solution:
    def threeSum(self, nums):
        from collections import defaultdict

        nums = sorted(nums)
        triplets = []

        for i, num in enumerate(nums):
            if num > 0:
                break
            if i > 0 and a == nums[i - 1]:
                continue

            left = (i + 1,)
            right = len(nums) - 1
            while left < right:
                sum = num + nums[left] + nums[right]
                if sum > 0:
                    right -= 1
                elif sum < 0:
                    left += 1
                else:
                    triplets.append([num, nums[left], nums[right]])
                    left += 1
                    right -= 1
                    while left < right and nums[left] == nums[left - 1]:
                        left += 1
        return triplets
