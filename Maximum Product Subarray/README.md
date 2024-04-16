1.Initialize three variables max_prod, min_prod, and max_so_far to store the maximum product ending at the current index, the minimum product ending at the current index (to handle negative numbers), and the maximum product found so far, respectively. Initialize them with the first element of the array.

2.Iterate through the array starting from the second element:

3.If the current element is negative, swap max_prod and min_prod because multiplying a negative number with the minimum product can result in a maximum product. Update max_prod to be the maximum of the current element and the product of max_prod and the current element. Update min_prod to be the minimum of the current element and the product of min_prod and the current element. Update max_so_far to be the maximum of max_so_far and max_prod. Return max_so_far, which represents the maximum product of a subarray.

This algorithm runs in linear time, O(n), where n is the size of the input array.
