### 2nd year , Difficulty-level : medium (can be given as 3rd question considering there are four questions)

// problem statement :-


Hardin and Tessa were playing with an array. They want to find whether this array is beautiful or not. 
A beautiful array is one in which all the elements of the array are palindromic numbers. write a prpgram to find whether 
the given array is beautiful or not.

For example :-
arr[]={111,222,343,545};
Output : 1 

Explanation :- this array is beautiful because all the elements of this array are palindromes so printed 1 
  
Example 2:-
arr[]={232,666,123};
output:- 0

Explanation:-
arr[2]=123 which is not a palindromic number so we printed 0
  
Input format : 
First line contains an integer n which is the size of the array
In the second line there are N space separated values of the array A[].
  
Output format:

print 1 if the array is beautiful and 0 if it is not beautiful




###Testcases:

Testcase 1:

Input : 
4
111 222 343 545
 output : 1
----------------------
   
Testcase 2:
Input : 
3
232 666 123

Output : 0
  
---------------------
  
TestCase 3:
Input : 
7
111 222 35653 1221 555 678876 1234321

Output : 1
  
---------------------------------

TestCase 4:

Input : 
6
897414798 12345678 666666 988976567 13131313 56654554 

Output : 0
  
TestCase 5:

Input : 
12
131 232 55555 6776 883399 4334 58322385 123321 29877892 1234554321 5673223765 2351161532

Output : 0
  
----------------------------------------------------------------------
  
Testcase 6:
Input : 
8
9889 555555 435888534 566589999  2332  1923443291 12355555 3443
Ouptut : 0
    
------------------------------------------------------------------
    
 TestCase 7:
Input : 
9
111 323 545 6776 555 8998 73455437 87333378 144565441 

Output : 1
