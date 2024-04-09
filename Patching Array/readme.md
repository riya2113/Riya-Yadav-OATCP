1. Initialize a counter for patches needed as 0.
2. Start with index i at 0, representing the current position in the array.
3. Start with a counter 'count' at 1.
4. Iterate until 'count' reaches the target number 'n':
5. If 'nums[i]' (current element in the array) is less than or equal to 'count', add 'nums[i]' to 'count' and move to the next element in the array.
6. Otherwise, double 'count' and increment the patches counter.
7. Return the count of patches needed.
