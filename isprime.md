#埃氏筛
>所使用的原理是从2开始，将每个素数的各个倍数，标记成合数。
一个素数的各个倍数，是一个差为此素数本身的等差数列。
此为这个筛法和试除法不同的关键之处，后者是以素数来测试每个待测数能否被整除。
>
##伪代码
>

Input: an integer n > 1
Let A be an array of Boolean values, indexed by integers 2 to n,
initially all set to true.
for i = 2, 3, 4, ..., not exceeding √n:
if A[i] is true:
for j = i2, i2+i, i2+2i, i2+3i, ..., not exceeding n :
A[j] := false
Output: all i such that A[i] is true

