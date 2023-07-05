# Insertion-Sort

Here's a summary of the insertion sort algorithm:

1. Start with the assumption that the first element of the array is sorted.
2. Iterate through the array, starting from the second element.
3. Compare the current element with the elements to its left, moving from right to left.
4. If the current element is smaller than the compared element, shift the compared element one position to the right.
5. Repeat step 4 until you find the correct position for the current element or reach the beginning of the array.
6. Insert the current element in its correct position.
7. Repeat steps 2-6 for the remaining unsorted elements in the array.
8.The array is now sorted.

During the sorting process, elements are continuously shifted to make room for the current element, instead of swapping elements like in other sorting algorithms.

The discussion was about the complexities of the insertion sort algorithm. The space complexity was determined to be constant, denoted as O(1), since only a few variables were created. The time complexity was analyzed in both the best and worst cases. In the best case scenario, when the array is already sorted, the number of comparisons is (n-1), resulting in a complexity of O(n). In the worst case, where the array is in reverse order, the number of comparisons follows the pattern 1+2+...+(n-1), resulting in a complexity of O(n^2).
