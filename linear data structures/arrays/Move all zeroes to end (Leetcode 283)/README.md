Move all the zeros to the last

You are given an integer array 

n

u

m

s

nums. Your task is to shift all the zeroes to the end of the array, while keeping the relative order of the non-zero elements unchanged.



Important: The transformation must be done in-place without using an extra array.



Function Declaration

Function Name

m

o

v

e

Z

e

r

o

e

s

moveZeroes — This function shifts all zeroes in the array to the end, while preserving the order of the remaining elements.



Parameters

n

u

m

s

nums: A reference to a array of integers.



The array contains both zero and non-zero integers.

You must modify the array directly (in-place), without allocating another array.

Return Value

This function returns void. The rearranged elements must be stored directly inside the original 

n

u

m

s

nums array.



The input and output formats provided below are only for testing with custom inputs.



Constraints

1

≤

nums.length

≤

10

4

1≤nums.length≤10 

4

&nbsp;

−

2

31

≤

nums

\[

i

]

≤

2

31

−

1

−2 

31

&nbsp;≤nums\[i]≤2 

31

&nbsp;−1

Input Format

The first line contains a single integer T — the number of test cases.



For each test case:



The first line contains an integer N — the length of the array.

The second line contains N space-separated integers representing the array.

Output Format

For each test case, print the modified array after all zeroes have been moved to the end.



If the array has only non-zero numbers, print it unchanged.

