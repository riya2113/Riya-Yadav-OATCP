1. Initialize variables patches = 0, maxReach = 1, and i = 0.
2. While maxReach <= n, repeat steps 3-6.
3. If i < nums.size() and nums[i] <= maxReach, update maxReach to maxReach + nums[i], and increment i.
4. Else, add maxReach to nums, update maxReach to maxReach * 2, and increment patches.
5. Repeat step 2 until maxReach > n.
6. Return patches.
