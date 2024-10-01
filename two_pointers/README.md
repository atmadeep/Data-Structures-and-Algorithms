# 🔍 Two Pointers

This folder contains problems that utilize the two pointers technique. The two pointers approach is an efficient method for solving problems that involve iterating through a sequence, often used to search pairs in a sorted array or linked list.

## 🎯 General Two Pointers Technique

The two pointers technique is a powerful 💪 and efficient 🚀 method for solving various algorithmic problems. Here's a colorful overview:

🔹 **Definition**: Two pointers involve using two reference points in a data structure, typically moving them towards or away from each other.

🔸 **Key Benefits**:
  - 🏃‍♂️ Reduces time complexity (often from O(n²) to O(n))
  - 💾 Minimizes space usage (usually O(1) extra space)

🌈 **Common Applications**:

1. 🔍 Searching pairs in a sorted array
2. 🔄 Reversing arrays or strings
3. 🗑️ Removing duplicates
4. 🪟 Sliding window problems

💡 **Pro Tip**: Always consider the two pointers approach when dealing with sorted arrays or linked lists!

The two pointers technique is particularly useful for:
1. 🎯 Searching pairs in a sorted array
2. 🔁 Reversing arrays or strings
3. 🚫 Removing duplicates
4. 🖼️ Sliding window problems

It often helps reduce the time complexity from O(n^2) to O(n) for many problems involving sequences. 🚀
## 📚 Problems

### 1. 🔤 Valid Palindrome

File: `valid_palindrome.cc`

Problem: Determine if a given string is a valid palindrome, considering only alphanumeric characters and ignoring cases.

Approach:
- 🧹 Remove non-alphanumeric characters and convert to lowercase.
- 👉👈 Use two pointers, one starting from the beginning and one from the end.
- 🚶‍♂️🚶‍♀️ Move the pointers towards the center, comparing characters.
- ✅ If all characters match until the pointers meet, it's a valid palindrome.

⏱️ Time Complexity: O(n), where n is the length of the string.
💾 Space Complexity: O(1), as we're modifying the string in-place.

### 2. 🔄 Two Sum II

File: `two_sum_II.cc`

Problem: Given a sorted array of integers, find two numbers such that they add up to a specific target number. Return the indices of the two numbers in sorted order.

Approach:
- 👉👈 Use two pointers, one starting from the beginning and one from the end.
- 🚶‍♂️🚶‍♀️ Move the pointers towards the center, comparing the sum of the elements at the pointers to the target.
- ✅ If the sum matches the target, return the indices.
- ❌ If the sum is less than the target, move the left pointer to the right.
- ❌ If the sum is greater than the target, move the right pointer to the left.

⏱️ Time Complexity: O(n), where n is the length of the array.
💾 Space Complexity: O(1), as we're using two pointers.

### 3. 🌊 Container With Most Water

File: `container_with_most_water.cc`

Problem: Given an array of heights, find two lines that together with the x-axis forms a container, such that the container contains the most water. Return the maximum area of water the container can store.

Approach:
- 👉👈 Use two pointers, one starting from the beginning and one from the end.
- 🚶‍♂️🚶‍♀️ Move the pointers towards the center, calculating the area formed by the lines.
- ✅ Keep track of the maximum area found.

⏱️ Time Complexity: O(n), where n is the length of the array.
💾 Space Complexity: O(1), as we're using two pointers.