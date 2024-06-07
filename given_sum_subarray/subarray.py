'''
*Given an array arr[] of non-negative integers and an integer sum, find a subarray that adds to a given sum.

*Note: There may be more than one subarray with sum as the given sum, print first such subarray. 
*/
'''

def find_subarray(array : list, __SUM__: int):
    start = 0
    end = 1
    current_sum = array[0]

    while(end < len(array)):

        while(current_sum > __SUM__ and (start < end - 1)):
            current_sum = current_sum - array[start]
            start += 1

        if(current_sum == __SUM__):
            print(f"Start and end indexes are {start} & {end-1}")
            return

        if(end < len(array)):
            current_sum = current_sum + array[end]
        end+=1
    
    print("No sub array found")


if __name__ == "__main__":
    array = list(map(int, input("Input array \n").split(" ")))
    target_sum = int(input("\nInput target sum: "))
    find_subarray(array=array, __SUM__=target_sum)