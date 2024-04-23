1.Input: Read the number of nodes (V) and the number of edges (E) from the input file.

2.Initialize: Create an adjacency matrix to represent the graph and initialize all flows to 0. Also, store the source and destination nodes.

3.Read Edges and Weights: Read each edge from the input file along with its weight and update the adjacency matrix accordingly.

4.Ford-Fulkerson Algorithm:
Initialize the flow network with flow 0.
While there is a path from source to destination in the residual graph (graph with remaining capacity):
Find the augmenting path using DFS or BFS.
Determine the bottleneck capacity along this path.
Update the flow along the path by adding the bottleneck capacity.
Update the residual capacities of the edges.
When there are no more augmenting paths, the algorithm terminates.

5.Output: Output the maximum flow achieved and the time taken by the Ford-Fulkerson algorithm.
