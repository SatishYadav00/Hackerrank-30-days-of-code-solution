Task
Given an array, a, of size n distinct elements, sort the array in ascending order using the Bubble Sort algorithm above. Once sorted, print the following 3 lines:

Array is sorted in numSwaps swaps.
where  is the number of swaps that took place.
First Element: firstElement
where  is the first element in the sorted array.
Last Element: lastElement
where  is the last element in the sorted array.
Hint: To complete this challenge, you will need to add a variable that keeps a running tally of all swaps that occur during execution.

Example


original a: 4 3 1 2
round 1  a: 3 1 2 4 swaps this round: 3
round 2  a: 1 2 3 4 swaps this round: 2
round 3  a: 1 2 3 4 swaps this round: 0


Array is sorted in 5 swaps.
First Element: 1
Last Element: 4
Input Format

The first line contains an integer, , the number of elements in array .
The second line contains  space-separated integers that describe .

Constraints

, where .
Output Format

Print the following three lines of output:

Array is sorted in numSwaps swaps.
where  is the number of swaps that took place.
First Element: firstElement
where  is the first element in the sorted array.
Last Element: lastElement
where  is the last element in the sorted array.
Sample Input 0

3
1 2 3
Sample Output 0

Array is sorted in 0 swaps.
First Element: 1
Last Element: 3
Explanation 0

The array is already sorted, so  swaps take place and we print the necessary  lines of output shown above.

Sample Input 1

3
3 2 1
Sample Output 1

Array is sorted in 3 swaps.
First Element: 1
Last Element: 3
