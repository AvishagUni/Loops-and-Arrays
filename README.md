# Graph and Knapsack Algorithms Project

This project is focused on implementing algorithms to solve two classic problems in computer science: graph operations and the knapsack problem. Developed as part of a **System Programming course**, it includes two main programs written in C, each handling different computational tasks involving graph traversal and optimization.

---

## 📋 Project Overview

### Part 1: Graph Operations
This section of the project involves representing a graph using an adjacency matrix and performing various operations, including:

1. **Graph Representation**: The graph is represented by an \( N \times N \) matrix where:
   - Each element represents the weight of the edge between two nodes.
   - A value of `0` indicates no edge between nodes.
   - Positive values represent the weight of an edge.

2. **Operations Implemented**:
   - Check if a path exists between two nodes.
   - Find the shortest path between two nodes using the **Floyd-Warshall algorithm**.
   - Input and display the adjacency matrix, with the ability to update the matrix with new values.

3. **Algorithms**:
   - **Floyd-Warshall**: Used to compute shortest paths between all pairs of nodes.
   - **Dijkstra (optional)**: An alternative for finding shortest paths from a single source node.

### Part 2: Knapsack Problem
This section tackles the 0/1 Knapsack Problem, where the goal is to maximize the total value of items included in a backpack while staying within a weight limit.

1. **Program Functionality**:
   - Accepts a list of items, each with a specified weight and value.
   - Determines the optimal subset of items to include for maximum value without exceeding the weight limit.
   - Implements the `knapSack` function to solve the problem.

2. **Output**:
   - Displays the maximum achievable profit.
   - Lists the items selected for the optimal solution.

---

## 🗂 Project Structure

- `Makefile` - Compilation instructions.
- `my_mat.h` and `my_mat.c` - Header and implementation files for graph-related functions.
- `my_graph.c` - Main program for graph operations.
- `my_Knapsack.c` - Main program for the knapsack problem.

---

## 🛠 Compilation and Execution

### Requirements
- **Operating System**: Ubuntu Linux
- **Compiler**: GCC with flags for warning checks

### Compilation
To compile the programs, navigate to the project directory and run:
```bash
make
