Find the majority element

You are given an array 

a

r

r

arr containing 

n

n integers. Your task is to return the majority element.



A majority element is defined as the element that occurs more than 

⌊

n

/

2

⌋

⌊n/2⌋ times. It is guaranteed that such an element always exists.



⌊

n

/

2

⌋

⌊n/2⌋ => The floor value means if 5 divided by 2 equals 2.5, we’ll choose 2 as the output because of the floor function. 



Follow-up:

Can you solve this problem in O(n) time complexity while using only O(1) extra space?



Function Declaration

Function Name

m

a

j

o

r

i

t

y

E

l

e

m

e

n

t

majorityElement – Finds the element that appears more than 

⌊

n

/

2

⌋

⌊n/2⌋ times in the array.



Parameters

a

r

r

arr : A list/array of integers of size 

n

n.

Return Value

Returns an integer — the majority element that appears more than half the time in the array.

Constraints:

n

=

=

a

r

r

.

l

e

n

g

t

h

n==arr.length

1

≤

n

≤

50

,

000

1≤n≤50,000

−

10

9

≤

a

r

r

\[

i

]

≤

10

9

−10 

9

&nbsp;≤arr\[i]≤10 

9

&nbsp;

Input Format

T

T → number of test cases



For each test case:



Line 1 → 

n

n (array size)

Line 2 → n integers representing the array

Output Format

One value per test case.

