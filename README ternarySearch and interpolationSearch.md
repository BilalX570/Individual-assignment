# Ternary and Interpolation Search in C++

## Student Information
- **Name**: Bilal Muktar  
- **Student ID**: RMNS-6274/23 
- **Course**: Data structure and Algorithm(DSA)

This program demonstrates two searching algorithms: **Ternary Search** and **Interpolation Search**, implemented in C++.


## 🔍 Ternary Search

Ternary Search is a divide-and-conquer algorithm used on **sorted arrays**. Unlike Binary Search, which divides the range into two halves, Ternary Search divides it into three parts.

### How it works:

1. Two midpoints are calculated within the current search range.
2. The target value is compared with the elements at both midpoints.
3. Based on the comparison:
   - If the target matches either midpoint, the search ends.
   - If the target is less than the first midpoint, the search continues in the leftmost third.
   - If the target is greater than the second midpoint, the search continues in the rightmost third.
   - Otherwise, it searches the middle third.
4. This process repeats until the element is found or the search range becomes invalid.

### Time Complexity:
- **Best Case**: O(1)
- **Average and Worst Case**: O(log₃ N), which is logarithmic like binary search but slightly slower due to more comparisons.

## 🔍 Interpolation Search

Interpolation Search is an improved search method used on **sorted arrays with uniformly distributed values**. It estimates the position of the target based on the values, rather than just splitting the array.

### How it works:

1. The algorithm calculates a probable position using the formula based on proportional value distribution.
2. It checks the value at the estimated position:
   - If it matches the target, the search ends.
   - If the target is larger, it shifts the lower bound up.
   - If the target is smaller, it shifts the upper bound down.
3. The process repeats until the target is found or the search interval becomes invalid.

### Time Complexity:
- **Best Case**: O(1)
- **Average Case**: O(log log N)
- **Worst Case**: O(N), especially when data is not uniformly distributed


## 🧪 How to Run

1. Save the code in a file named `search_algorithms.cpp`
2. Compile the program using g++:
   ```bash
   g++ search_algorithms.cpp -o search_algorithms
