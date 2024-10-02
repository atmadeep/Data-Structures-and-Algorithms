def max_average(nums : list[int],k : int):
    sum_k = sum(nums[0:k])
    max_avg = sum_k/k 

    for i in range(k, len(nums)):
        sum_k += nums[i] -nums[i-k] 
        max_avg = max(sum_k,max_avg)

    return max_avg/k

if __name__ == "__main__":
    arr = [0,1,1,3,3]
    print(max_average(arr,4))

