### 2nd year , Difficulty-level: Medium

// problem statement :-

Arvind and suchi were solving the classical FizzBuzz Problem where in the given range of number from 1 to n if the
number is divisible by 3 print Fizz , if the number is divisible by 5 print Buzz and if the number is divisible by 
both 3 and 5 then print FizzBuzz and if none of them then print the number itself. Now shree came in the room and to test their knowledge of programming he  asked them do a modified FizzBuzz problem instead.
In this modified FizzBuzz Problem if any digit of the number is 3 print Fizz and  if any digit is 5 then print Buzz and if none of them then print the number itself.
Help suchi and arvind write a program for this problem.

for example : n=15
output:-
  1
  2
  Fizz
  4
  Buzz
  6
  7
  8
  9
  10
  11
  12
  Fizz 
  13
  14
  Buzz
  
Explanation :- In place of 3 we printed Fizz as this contains a digit 3, in place of 5 we printed Buzz as this contains a digit 5,
  in place of 13 we printed Fizz because it contains a digit 3 and similary in place of 15 we printed buzz as it contains a digit 5.
    
    
    
Input format: Input contains a single integer n 
Ouput Format : In the range of 1 to n print fizz if number contains a digit 3 and print buzz if it contains a digit 5 and if none then print the number itself
  
  
  
// ------------------  TestCases---------------------:-

TestCase 1:

Input: 5
Output: 
1
2
FIZZ
4
BUZZ

---------------------------------
Testcase 2:

Input : 20
output : 
1
2
FIZZ
4
BUZZ
6
7
8
9
10
11
12
FIZZ
14
BUZZ
16
17
18
19
20
------------------------------------------

TestCase 3 :
Input : 10
Output :
1
2
FIZZ
4
BUZZ
6
7
8
9
10
-----------------------------

Testcase 4:

Input : 25
Output : 
1
2
FIZZ
4
BUZZ
6
7
8
9
10
11
12
FIZZ
14
BUZZ
16
17
18
19
20
21
22
FIZZ
24
BUZZ
--------------------------------

TestCase 5:

input : 35
Output : 
1
2
FIZZ
4
BUZZ
6
7
8
9
10
11
12
FIZZ
14
BUZZ
16
17
18
19
20
21
22
FIZZ
24
BUZZ
26
27
28
29
FIZZ
FIZZ
FIZZ
FIZZ
FIZZ
FIZZBUZZ
-----------------------------------

TestCase 6:

input:  50
output : 
1
2
FIZZ
4
BUZZ
6
7
8
9
10
11
12
FIZZ
14
BUZZ
16
17
18
19
20
21
22
FIZZ
24
BUZZ
26
27
28
29
FIZZ
FIZZ
FIZZ
FIZZ
FIZZ
FIZZBUZZ
FIZZ
FIZZ
FIZZ
FIZZ
40
41
42
FIZZ
44
BUZZ
46
47
48
49
BUZZ
---------------------------

TestCase 7:

Input : 60
output : 
1
2
FIZZ
4
BUZZ
6
7
8
9
10
11
12
FIZZ
14
BUZZ
16
17
18
19
20
21
22
FIZZ
24
BUZZ
26
27
28
29
FIZZ
FIZZ
FIZZ
FIZZ
FIZZ
FIZZBUZZ
FIZZ
FIZZ
FIZZ
FIZZ
40
41
42
FIZZ
44
BUZZ
46
47
48
49
BUZZ
BUZZ
BUZZ
FIZZBUZZ
BUZZ
BUZZ
BUZZ
BUZZ
BUZZ
BUZZ
60

