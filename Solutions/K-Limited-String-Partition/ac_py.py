
import sys

# Problem: Divide a string into minimum contiguous valid substrings.
# A substring is valid if every character appears at most k times.
# Input: n (string length), k (max frequency), s (the string).
# Output: Minimum number of valid substrings.

# Reflection:
# We need to partition the string s into s_1 + s_2 + ... + s_m such that each s_i is contiguous,
# s = s_1 + s_2 + ... + s_m, and m is minimized.
# Each s_i must satisfy the condition: for any character c, count(c in s_i) <= k.
# The problem guarantees a valid partition is always possible.

# Approach: Greedy strategy.
# To minimize the number of substrings, we should try to make each substring as long as possible.
# We start building the first substring from the beginning of the string.
# We extend the current substring character by character from left to right.
# We keep track of the frequency of each character within the *current* substring.
# If adding the next character causes its frequency in the *current* substring to exceed k,
# then this character cannot be part of the current substring.
# The current substring must end just before this character.
# We increment the count of substrings and start a new substring beginning with this character.
# We reset the frequency counts for the new substring and add the current character to it.
# We repeat this process until we have processed the entire string.

# This greedy approach is optimal because by extending the current substring as far as possible,
# we push the starting point of the next substring as far right as possible.
# This leaves the maximum possible remaining length for subsequent partitions,
# which intuitively leads to the minimum total number of partitions.

# Data Structures:
# - An integer `count` to store the number of substrings found so far. Initialized to 1 for the first substring.
# - A frequency map (array) `freq` of size 26 to store the counts of each lowercase letter ('a'-'z')
#   within the *current* substring being built. Initialized to zeros.

# Algorithm Steps:
# 1. Read n and k.
# 2. Read the string s.
# 3. Initialize `count = 1`.
# 4. Initialize `freq = [0] * 26` (for 'a' through 'z').
# 5. Iterate through the string s from index i = 0 to n-1:
#    a. Get the current character `char = s[i]`.
#    b. Calculate the index for this character in the frequency array: `idx = ord(char) - ord('a')`.
#    c. Increment the frequency of this character in the current substring: `freq[idx] += 1`.
#    d. Check if the frequency of this character now exceeds k: `if freq[idx] > k:`.
#    e. If it exceeds k:
#       i. The current substring must end at index i-1.
#       ii. We need to start a new substring at index i. Increment the substring count: `count += 1`.
#       iii. Reset the frequency map for the new substring: `freq = [0] * 26`.
#       iv. Add the current character `s[i]` to the new substring. Its frequency is now 1: `freq[idx] = 1`.
# 6. After the loop finishes, `count` holds the minimum number of valid substrings.
# 7. Print `count`.

# Read input from stdin
# n: length of the string
# k: maximum allowed frequency for any character in a valid substring
n, k = map(int, input().split())
# s: the input string
s = input().strip()

# Initialize the count of valid substrings.
# We start with 1 because the first character always begins the first substring.
substring_count = 1

# Initialize a frequency array for the current substring being built.
# The array has 26 elements, one for each lowercase English letter 'a' through 'z'.
# freq[i] will store the count of the character 'a' + i in the current substring.
freq = [0] * 26

# Iterate through the string character by character.
for char in s:
    # Calculate the index corresponding to the current character ('a' is 0, 'b' is 1, ..., 'z' is 25).
    char_index = ord(char) - ord('a')

    # Increment the frequency of the current character in the current substring.
    freq[char_index] += 1

    # Check if adding this character makes its frequency exceed the limit k.
    if freq[char_index] > k:
        # If the frequency exceeds k, the current character cannot be part of the current substring.
        # This means the current substring must end just before this character.
        # We need to start a new substring beginning with the current character.

        # Increment the total count of substrings.
        substring_count += 1

        # Reset the frequency map for the new substring.
        # The new substring starts with the current character, so its frequency is 1.
        # We can simply re-initialize the array to zeros and then set the frequency of the current character to 1.
        freq = [0] * 26
        freq[char_index] = 1

# After iterating through all characters, substring_count holds the minimum number of valid substrings.
# The last character processed either extended the final substring or started a new one which ends at the string end.
# The count is correctly maintained throughout the loop.

# Print the result.
print(substring_count)

# Example 1: n=6, k=2, s="aabbcc"
# Initial: count=1, freq=[0]*26
# i=0, 'a': freq['a']=1. 1<=2. OK.
# i=1, 'a': freq['a']=2. 2<=2. OK.
# i=2, 'b': freq['b']=1. 1<=2. OK.
# i=3, 'b': freq['b']=2. 2<=2. OK.
# i=4, 'c': freq['c']=1. 1<=2. OK.
# i=5, 'c': freq['c']=2. 2<=2. OK.
# End loop. count=1. Output: 1. Correct.

# Example 2: n=9, k=2, s="aaabbbccc"
# Initial: count=1, freq=[0]*26
# i=0, 'a': freq['a']=1. 1<=2. OK.
# i=1, 'a': freq['a']=2. 2<=2. OK.
# i=2, 'a': freq['a']=3. 3>2. VIOLATION. count=2. freq=[0]*26. freq['a']=1.
# i=3, 'b': freq['b']=1. 1<=2. OK. (freq={'a':1, 'b':1})
# i=4, 'b': freq['b']=2. 2<=2. OK. (freq={'a':1, 'b':2})
# i=5, 'b': freq['b']=3. 3>2. VIOLATION. count=3. freq=[0]*26. freq['b']=1.
# i=6, 'c': freq['c']=1. 1<=2. OK. (freq={'b':1, 'c':1})
# i=7, 'c': freq['c']=2. 2<=2. OK. (freq={'b':1, 'c':2})
# i=8, 'c': freq['c']=3. 3>2. VIOLATION. count=4. freq=[0]*26. freq['c']=1.
# End loop. count=4. Output: 4. Correct.

# Edge Case: n=1, k=1, s="z"
# Initial: count=1, freq=[0]*26
# i=0, 'z': freq['z']=1. 1<=1. OK.
# End loop. count=1. Output: 1. Correct.

# Edge Case: n=5, k=5, s="abcde"
# Initial: count=1, freq=[0]*26
# i=0..4: frequencies become 1. All 1<=5. OK.
# End loop. count=1. Output: 1. Correct.

# Edge Case: n=5, k=5, s="aaaaa"
# Initial: count=1, freq=[0]*26
# i=0, 'a': freq['a']=1. 1<=5. OK.
# i=1, 'a': freq['a']=2. 2<=5. OK.
# i=2, 'a': freq['a']=3. 3<=5. OK.
# i=3, 'a': freq['a']=4. 4<=5. OK.
# i=4, 'a': freq['a']=5. 5<=5. OK.
# End loop. count=1. Output: 1. Correct.

# Edge Case: n=3, k=1, s="aba"
# Initial: count=1, freq=[0]*26
# i=0, 'a': freq['a']=1. 1<=1. OK.
# i=1, 'b': freq['b']=1. 1<=1. OK. (freq={'a':1, 'b':1})
# i=2, 'a': freq['a']=2. 2>1. VIOLATION. count=2. freq=[0]*26. freq['a']=1.
# End loop. count=2. Output: 2. Correct. Partition: "ab", "a".

# Edge Case: n=3, k=1, s="aaa"
# Initial: count=1, freq=[0]*26
# i=0, 'a': freq['a']=1. 1<=1. OK.
# i=1, 'a': freq['a']=2. 2>1. VIOLATION. count=2. freq=[0]*26. freq['a']=1.
# i=2, 'a': freq['a']=2. 2>1. VIOLATION. count=3. freq=[0]*26. freq['a']=1.
# End loop. count=3. Output: 3. Correct. Partition: "a", "a", "a".

# Complexity Analysis:
# Time Complexity: O(n) - Linear scan of the string. Constant time operations per character.
# Inside the loop, operations like character frequency update and comparison take constant time (O(1))
# because the size of the alphabet (26) is constant. Resetting the frequency array also takes constant time (O(26)).
# Therefore, the total time complexity is proportional to the length of the string, O(n).
# This meets the time limit of 1 second for n <= 10^5.

# Space Complexity: O(1) - Fixed size frequency array (26 elements).
# The space used does not depend on the input string length n, only on the size of the alphabet, which is constant.
# This meets the memory limit of 1 second.

# The solution uses a greedy approach with a frequency array, which is efficient and correct for this problem.