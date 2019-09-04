# Problem 1
## Multiples of 3 and 5

---

### Description

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get
3, 5, 6, and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

---

### Explanation of Solution

This problem is deceptively straight forward.

If we start listing out the multiples of 3: <code>3, 6, 9, 12, ...</code>
We can see that it is really just: <code>3 * 1, 3 * 2, 3 * 3, 3 * 4, ...</code>

Since we are looking for a sum, we can use the well defined Triangle Number
formula for finding the n<sup>th</sup> Triangle Number: <var>n</var> *
(<var>n</var> + 1) &div; 2
