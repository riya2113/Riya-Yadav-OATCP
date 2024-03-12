Input: Receive the target sum N.
Initialization: Start with an array dp where each element represents the number of ways to obtain the corresponding sum. 
Set dp[0]=1 because there's one way to obtain the sum of 0 (by not throwing the dice).
Compute Ways:

For each sum i from 1 to N:
Iterate through each possible outcome of the dice (from 1 to 6).
For each outcome j, update dp[i] by adding the number of ways to obtain i using the outcome j (by subtracting j from i).
Ensure that i−j is a valid index and non-negative.
Add the number of ways to obtain dp[i].
Output: Print dp[N], which represents the number of ways to obtain the target sum N.
