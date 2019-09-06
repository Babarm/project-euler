# Problem 4
## Largest Palindrome Product

---

### Description

A palindromic number reads the same both ways. The largest palindrome made from
the product of two 2-digit numbers is 9009 = 91 * 99;

Find the largest palindrome made from the product of two 3-digit numbers;

---

### Explanation of Solution

This problem is pretty straight forward. We start at 100 and check all
palindrome products until we have the largest one.

Algorithm Pseudo Code:

<pre>
largest := 0

for a := 100 to 999:
    for b := 100 to 999:
        c := a * b
        if is_palindrome(c) is true and c is greater than largest:
            largest := c
</pre>
