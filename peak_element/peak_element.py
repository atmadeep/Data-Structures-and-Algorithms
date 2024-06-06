'''
Given an array arr of n elements that is first strictly increasing and then maybe strictly decreasing, find the maximum element in the array.

Note: If the array is increasing then just print the last element will be the maximum value.
'''

def find_largest(arr : list):
    length = len(arr)
    # Edge cases
    # Single element
    if(len(arr) ==1 ):
        return arr[0]
    
    #strictly increasing
    if(arr[0] >= arr[1]):
        return arr[0]
    
    #strictly decreasing
    if(arr[length-1] >= arr[length-2]):
        return arr[length-1]


    # Check the entire array
    for i in range(length):
        if((arr[i] > arr[i-1]) and (arr[i] > arr[i+1])):
            return arr[i]
    return -1


array = list(map(int,input("Input array\n").split(" ")))
print(find_largest(array))