class Solution(object):
    def twoSum(self, numbers, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """
        small = 0
        high = len(numbers) - 1

        while(small < high):
            if((numbers[small] + numbers[high])  == target):
                return [small + 1, high + 1]
            
            if((numbers[small] + numbers[high]) < target):
                small+=1
            
            else:
                high-=1
            
        return [-1,-1]