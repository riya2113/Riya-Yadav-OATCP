1. Initialize variables patches = 0, miss = 1, and i = 0.
2. While miss <= n, repeat steps 3-6.
3. If i < nums.size() and nums[i] <= miss, update miss to miss + nums[i], and increment i.
4. Else, add miss to nums, update miss to miss * 2, and increment patches.
5. Repeat step 2 until miss > n.
6. Return patches.
