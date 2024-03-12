Input: Obtain the grid size n and the grid itself.
Initialize: Create a 2D array to store the number of paths for each cell.
Check Base Cases: Ensure the starting and ending cells are not traps. If they are, return 0.
Traverse the Grid: Iterate through each cell of the grid.
Count Paths:
If a cell is a trap, skip it.
Otherwise, if it's in the first row or column, set its path count to 1 if the preceding cell is reachable.
For other cells, set its path count to the sum of paths from the cell above and the cell to the left.
Output: Return the count of paths from the upper-left to the lower-right cell.
