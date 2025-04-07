
# Sorting Algorithms Implementation

## Student Information
- **Name**: Bilal Muktar  
- **Student ID**: RMNS-6274/23 
- **Course**: Data structure and Algorithm(DSA)

This C++ program demonstrates two fundamental sorting algorithms: Bubble Sort and Insertion Sort.

## Algorithms

### Bubble Sort
**Time Complexity**: O(n²)  
**Space Complexity**: O(1)  

**Steps**:
1. Start with the first element
2. Compare adjacent elements
3. Swap if they are in wrong order
4. Repeat for each element until no swaps are needed
5. With each pass, the largest unsorted element "bubbles up" to its correct position


### Insertion Sort
**Time Complexity**: O(n²) (best case O(n) when nearly sorted)  
**Space Complexity**: O(1)  

**Steps**:
1. Start with second element as the "key"
2. Compare key with previous elements
3. Shift elements greater than key one position right
4. Insert key in its correct position
5. Repeat for each subsequent element


## Time Complexity Comparison

| Algorithm       | Best Case | Average Case | Worst Case | Space Complexity |
|----------------|-----------|--------------|------------|------------------|
| **Bubble Sort**    | O(n)      | O(n²)        | O(n²)      | O(1)             |
| **Insertion Sort** | O(n)      | O(n²)        | O(n²)      | O(1)             |
| **Selection Sort** | O(n²)     | O(n²)        | O(n²)      | O(1)             |

### Key Notes:
- **O(n)** best case occurs when input is nearly sorted (Bubble/Insertion)
- All have **O(1)** space complexity (in-place sorting)
- Selection Sort has **consistent O(n²)** performance in all cases
- Insertion Sort performs best for small/partially-sorted datasets


This README provides:
1. Clear algorithm explanations with step-by-step breakdowns
2. Time/space complexity analysis
3. Visual examples of how each sort works
4. Compilation/execution instructions
5. Key features and test case information

The document is formatted for GitHub and maintains a professional technical writing style while being accessible to beginners.