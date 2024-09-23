# Arrays Problems

This folder contains solutions to various array-related problems. Below is a description of each problem solved in the `.py` or `.cpp` files in this folder.

## valid_sudoku.py

**Problem:** Determine if a 9x9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:
1. Each row must contain the digits 1-9 without repetition.
2. Each column must contain the digits 1-9 without repetition.
3. Each of the nine 3x3 sub-boxes of the grid must contain the digits 1-9 without repetition.

**Solution:** The script checks the validity of the Sudoku board by iterating through each row, column, and 3x3 sub-box, ensuring that no digit is repeated. It uses sets to keep track of the digits seen so far in each row, column, and sub-box.

## encode_decode_string.py

**Problem:** Encode a list of strings into a single string and decode it back to the original list of strings.

**Solution:** The `encode` function concatenates each string with its length and a delimiter. The `decode` function splits the encoded string using the delimiter to reconstruct the original list of strings.

## group_anagram.py

**Problem:** Group a list of strings into anagrams.

**Solution:** The script uses a dictionary to group strings that are anagrams of each other. It counts the frequency of each character in the strings and uses these counts as keys in the dictionary.

## product_of_array.py

**Problem:** Given an array of integers, return an array where each element is the product of all the elements in the original array except the one at the current index.

**Solution:** The script constructs the result array by first calculating the prefix products and then the postfix products, multiplying them together to get the final result.

## top_k_elements.py

**Problem:** Find the top `k` most frequent elements in an array.

**Solution:** The script uses a dictionary to count the frequency of each element and then uses a heap to extract the top `k` elements based on their frequencies.

## two_nums.cc

**Problem:** Given an array of integers and a target sum, find two numbers such that they add up to the target sum and return their indices.

**Solution:** The script sorts the array while keeping track of the original indices, then uses a two-pointer technique to find the two numbers that add up to the target sum.

## two_sum_2.py

**Problem:** Given a sorted array of integers and a target sum, find two numbers such that they add up to the target sum and return their indices (1-based).

**Solution:** The script uses a two-pointer technique to find the two numbers that add up to the target sum, returning their indices in a 1-based format.
