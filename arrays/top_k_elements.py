def topKFrequent(nums, k):
    from collections import defaultdict
    from heapq import nlargest
    freq_dict = defaultdict(int)
    for i in range(len(nums)):
        freq_dict[nums[i]]+=1
    print(freq_dict) 
    sorted_list = sorted(freq_dict.items(),key = lambda x : x[1], reverse=True)[:k]
    print(sorted_list)


array = [1,2,2,2,3,3,3,4]
print(topKFrequent(array,2))